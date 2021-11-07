"use strict";
const main = arg => {
    const A = arg.trim().split("\n");
    let H = [];
    for (var i = 0; i < A.length; i++) {
        const ai = A[i];
        if (!H.includes(ai)) {
            H.push(ai);
        }
    }
    console.log(H.length - 1);
}
main(require('fs').readFileSync('/dev/stdin', 'utf8'));