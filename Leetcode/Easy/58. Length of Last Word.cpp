class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int idx = n - 1;

        // Skip trailing spaces
        while (idx >= 0 && s[idx] == ' ')
            idx--;

        int len = 0;

        // Count characters of last word
        while (idx >= 0 && s[idx] != ' ') {
            len++;
            idx--;
        }

        return len;
    }
};
