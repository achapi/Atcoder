"use strict";
const main = arg => {
    const input = arg.split("\n").map(e => e.split(" ").map(Number));
    let n = input[0][0];
    let l = input[0][1];
    let r = input[0][2];
    let ans = 0;
    for (var i = l; i <= r; i++) {
        if ((i ^ n) < n) ans++;
    }
    console.log(ans);
}
main(require('fs').readFileSync('/dev/stdin', 'utf8'));