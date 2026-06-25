class Solution {
public:
  string reverseOnlyLetters(string s) {
    stack<char> letterStack;
    for (char c : s)
      if (isalpha(c))
        letterStack.push(c);

    for (char &c : s) {
      if (isalpha(c)) {
        c = letterStack.top();
        letterStack.pop();
      }
    }
    return s;
  }
};
