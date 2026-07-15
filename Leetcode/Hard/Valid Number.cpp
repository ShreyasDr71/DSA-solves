class Solution {
public:
  bool isNumber(string s) {
    bool hasDigit = false;
    bool hasDot = false;
    bool hasExponent = false;

    int i = 0;

    // Handle sign at the beginning
    if (s[i] == '+' || s[i] == '-') {
      i++;
    }

    while (i < s.size()) {

      if (isdigit(s[i])) {
        hasDigit = true;
      }

      else if (s[i] == '.') {
        // Only one dot, and it must come before 'e'
        if (hasDot || hasExponent)
          return false;

        hasDot = true;
      }

      else if (s[i] == 'e' || s[i] == 'E') {
        // 'e' must appear once and after at least one digit
        if (hasExponent || !hasDigit)
          return false;

        hasExponent = true;
        hasDigit = false; // Need digits after 'e'

        // Allow sign after e
        if (i + 1 < s.size() && (s[i + 1] == '+' || s[i + 1] == '-')) {
          i++;
        }
      }

      else {
        return false;
      }

      i++;
    }

    return hasDigit;
  }
};
