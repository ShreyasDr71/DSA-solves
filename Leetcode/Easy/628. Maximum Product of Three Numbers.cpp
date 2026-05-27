class Solution {
public:
  int maximumProduct(std::vector<int> &nums) {
    // Initialize the three largest and two smallest with extreme values
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (int n : nums) {
      // Update the three largest
      if (n > max1) {
        max3 = max2;
        max2 = max1;
        max1 = n;
      } else if (n > max2) {
        max3 = max2;
        max2 = n;
      } else if (n > max3) {
        max3 = n;
      }

      // Update the two smallest
      if (n < min1) {
        min2 = min1;
        min1 = n;
      } else if (n < min2) {
        min2 = n;
      }
    }

    // Return the max of the two potential scenarios
    return std::max(max1 * max2 * max3, min1 * min2 * max1);
  }
};
