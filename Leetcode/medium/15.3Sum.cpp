class Solution {
public:
  vector<vector<int>> threeSum(vector<int> &nums) {
    int final = 0;
    sort(nums.begin(), nums.end());
    set<vector<int>> s;
    vector<vector<int>> output;
    for (int i = 0; i < nums.size(); i++) {
      int j = i + 1;
      int k = nums.size() - 1;
      while (j < k) {
        int sum = nums[i] + nums[j] + nums[k];
        if (sum == final) {
          s.insert({nums[i], nums[j], nums[k]});
          j++;
          k--;
        } else if (sum < final) {
          j++;
        } else {
          k--;
        }
      }
    }
    for (auto triplets : s)
      output.push_back(triplets);
    return output;
  }
};
