class Solution {
public:
  vector<int> searchRange(vector<int> &arr, int target) {

    int n = arr.size();
    int index = -1;

    // Binary Search
    int l = 0, r = n - 1;

    while (l <= r) {
      int mid = l + (r - l) / 2;

      if (arr[mid] == target) {
        index = mid;
        break;
      } else if (arr[mid] < target) {
        l = mid + 1;
      } else {
        r = mid - 1;
      }
    }

    // not found
    if (index == -1)
      return {-1, -1};

    int start = index;
    int end = index;

    //  left
    while (start > 0 && arr[start - 1] == target) {
      start--;
    }

    // right
    while (end < n - 1 && arr[end + 1] == target) {
      end++;
    }

    return {start, end};
  }
};
