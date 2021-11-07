"use strict";
let got = [];
let time = 0;
let A;
const getwaza = a => {
    time += a[0];
    if (a.length === 1) return;
    for (let i = 1; i < a.length; i++) {
        if (!got.includes(a[i]) && a[i] !== 0) {
            got.push(a[i]);
            getwaza(A[a[i]]);
        }
    }
}
const main = arg => {
    A = arg.split("\n").map(e => e.split(" ").map(Number));
    const N = A[A[0]];
    getwaza(N);
    console.log(time);
}
main(require('fs').readFileSync('/dev/stdin', 'utf8'));