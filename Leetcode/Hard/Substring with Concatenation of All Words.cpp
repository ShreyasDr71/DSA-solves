class Solution {
public:
  vector<int> findSubstring(string s, vector<string> &words) {
    vector<int> ans;

    int wordLen = words[0].size();
    int totalWords = words.size();

    unordered_map<string, int> target;

    // Store frequency of each word
    for (string word : words) {
      target[word]++;
    }

    // Try every possible starting offset
    for (int start = 0; start < wordLen; start++) {

      unordered_map<string, int> window;

      int left = start;
      int count = 0;

      // Move right pointer word by word
      for (int right = start; right + wordLen <= s.size(); right += wordLen) {

        string curr = s.substr(right, wordLen);

        // Invalid word
        if (target.find(curr) == target.end()) {
          window.clear();
          count = 0;
          left = right + wordLen;
          continue;
        }

        window[curr]++;
        count++;

        // Too many copies of the same word
        while (window[curr] > target[curr]) {
          string removeWord = s.substr(left, wordLen);

          window[removeWord]--;
          count--;
          left += wordLen;
        }

        // Found all words
        if (count == totalWords) {
          ans.push_back(left);

          string removeWord = s.substr(left, wordLen);
          window[removeWord]--;
          count--;
          left += wordLen;
        }
      }
    }

    return ans;
  }
};
