import random
import subprocess
import sys

DUMPFILE_NAME = 'interactive_tester.dump'

assert sys.argv.count("--") == 1 and sys.argv.index("--") == 3, (
    f"Usage: python {sys.argv[0]} <input_file> <seed> -- <cmd_line_solution>"
)
with open(sys.argv[1]) as f:
    input_content = f.read()
    input_lines = input_content.splitlines()
    W, H, T = (int(x) for x in input_lines[0].split())
    goal_img = [[1 if input_lines[1 + y][x] ==
                 '#' else 0 for x in range(W)] for y in range(H)]
random.seed(sys.argv[2])

cmd_line_sol = sys.argv[4:]
sol = subprocess.Popen(
    cmd_line_sol,
    stdin=subprocess.PIPE,
    stdout=subprocess.PIPE)

sol.stdin.write(bytes(input_content, "UTF-8"))
sol.stdin.flush()


# Bresenham's line algorithm
def drawline(canvas, x0, y0, x1, y1, color):
    dx = abs(x1 - x0)
    dy = abs(y1 - y0)
    sx = +1 if x0 < x1 else -1
    sy = +1 if y0 < y1 else -1
    err = dx - dy

    while True:
        canvas[y0][x0] |= (1 << color)
        if x0 == x1 and y0 == y1:
            break
        e2 = err * 2
        if e2 > -dy:
            err -= dy
            x0 += sx
        if e2 < dx:
            err += dx
            y0 += sy


canvas = [[0] * W for _ in range(H)]
pen_pos = [(0, 0), (0, 0)]
for t in range(T):
    instr = sol.stdout.readline()
    assert instr, "Failed to read output from solution"
    instr = instr.decode("UTF-8")

    tokens = instr.split()
    if all(t == "-1" for t in tokens):
        break
    assert len(tokens) == 2 and all(t.isdigit() for t in tokens), (
        f"Invalid output: {instr}"
    )

    ix, iy = (int(t) for t in tokens)
    assert 0 <= ix < W and 0 <= iy < H, (
        f"Coordinates out of range: ({ix}, {iy})"
    )

    move_idx = random.randint(0, 1)
    drawline(canvas, pen_pos[move_idx][0],
             pen_pos[move_idx][1], ix, iy, move_idx)
    pen_pos[move_idx] = (ix, iy)
    sol.stdin.write(bytes(f"{move_idx}\n", "UTF-8"))
    sol.stdin.flush()

black_correct, black_goal = 0, 0
white_correct, white_goal = 0, 0
for y in range(H):
    for x in range(W):
        if goal_img[y][x] == 1:
            black_goal += 1
            if canvas[y][x] != 0:
                black_correct += 1
        else:
            white_goal += 1
            if canvas[y][x] == 0:
                white_correct += 1

black_accuracy = black_correct * 100 / black_goal
white_accuracy = white_correct * 100 / white_goal

print('A solution successfully finished')
print(
    f'* Black pixels: {black_correct} / {black_goal} ({black_accuracy:.3}% correct)')
print(
    f'* White pixels: {white_correct} / {white_goal} ({white_accuracy:.3}% correct)')

with open(DUMPFILE_NAME, 'w') as dump:
    dump.write(f'{W} {H}\n')
    for y in range(H):
        dump.write(
            ''.join(str(canvas[y][x] + goal_img[y][x] * 4) for x in range(W)) + '\n')
print(f'Wrote detailed results to {DUMPFILE_NAME}')
