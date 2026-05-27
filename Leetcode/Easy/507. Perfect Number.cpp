class Solution {
public:
  bool checkPerfectNumber(int num) {
    int sum = 0;
    for (int i = 1; i++; i < num) {
      if (num % i == 0) {
        sum += i;
      }
    }
    return sum == num;
  }
};
