"use strict";
const main = arg => {
    const input = arg.split("\n").map(e => e.split(" ").map(Number));
    let N = input[0][0];
    let K = input[0][1];
    let A = input[0][2];
    const ama = K % N;
    if (N > K) {
        if (N < K + A - 1) {
            console.log(K + A - 1 - N);
        } else {
            console.log(K + A - 1);
        }
    } else {
        K = K + A - 1;
        if (K % N === 0) {
            console.log(N);
        } else {
            console.log(K % N);
        }
    }
}
main(require('fs').readFileSync('/dev/stdin', 'utf8'));