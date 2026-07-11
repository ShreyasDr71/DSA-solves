class Solution {
public:
    void solve(vector<int>& candidates, int target,
               vector<int>& current,
               vector<vector<int>>& ans,
               int index) {

        // Found a valid combination
        if (target == 0) {
            ans.push_back(current);
            return;
        }

        // No valid combination possible
        if (index == candidates.size() || target < 0) {
            return;
        }

        // Take the current element
        current.push_back(candidates[index]);
        solve(candidates, target - candidates[index],
              current, ans, index);

        // Backtrack
        current.pop_back();

        // Skip the current element
        solve(candidates, target, current,
              ans, index + 1);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> ans;
        vector<int> current;

        solve(candidates, target, current, ans, 0);

        return ans;
    }
};
