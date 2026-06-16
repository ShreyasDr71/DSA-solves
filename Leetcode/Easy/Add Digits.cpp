class Solution {
public:
  int addDigits(int num) { return 1 + (num - 1) % 9; }
}; // digital modulo makes it stay between 0-9 whenever a number is added till a
   // single digit.
