"use strict";
const main = arg => {
    console.log(Math.round(arg));
}
main(require('fs').readFileSync('/dev/stdin', 'utf8'));