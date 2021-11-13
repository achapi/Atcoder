"use strict";
const main = arg => {
    const input = arg.split("\n").map(e => e.split(" ").map(Number));
    let N = input[0][0];
    let K = input[0][1];
    let A = input[0][2];
    console.log((A - 1 + K - 1) % N + 1);
}
main(require('fs').readFileSync('/dev/stdin', 'utf8'));