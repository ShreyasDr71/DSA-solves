class Solution {
public:
  vector<int> addToArrayForm(vector<int> &num, int k) {
    int i = num.size() - 1;
    int carry = 0;

    while (i >= 0 || k > 0 || carry) {
      int sum = carry;

      if (i >= 0)
        sum += num[i];

      sum += k % 10;
      k /= 10;

      carry = sum / 10;

      if (i >= 0)
        num[i--] = sum % 10;
      else
        num.insert(num.begin(), sum % 10);
    }

    return num;
  }
};
