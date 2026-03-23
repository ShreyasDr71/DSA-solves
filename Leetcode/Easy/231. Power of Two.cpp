class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};
/* So n-1 always has filled ones at the end , perform bit to check patter*/
