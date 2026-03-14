/**
 * @param {number} x
 * @return {number}
 */
var mySqrt = function(x) {
    if (x < 2) return x;
    let start = 1;
    let end = x >> 1;
    while (start <= end) {
        const mid = (end + start) >> 1;
        const sqr = mid * mid;
        if (sqr == x) return mid;
        else if (sqr > x) end = mid - 1;
        else start = mid + 1;
    }
    return end;
};
