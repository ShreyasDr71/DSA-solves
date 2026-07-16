class Solution {
public:
  vector<string> fullJustify(vector<string> &words, int maxWidth) {

    vector<string> ans;
    int n = words.size();

    int i = 0;

    while (i < n) {

      int j = i;
      int totalLength = 0;

      // Find how many words fit in this line
      while (j < n && totalLength + words[j].size() + (j - i) <= maxWidth) {

        totalLength += words[j].size();
        j++;
      }

      int spaces = maxWidth - totalLength;
      int gaps = j - i - 1;

      string line = "";

      // Last line or single word
      if (j == n || gaps == 0) {

        for (int k = i; k < j; k++) {

          if (k > i)
            line += " ";

          line += words[k];
        }

        while (line.size() < maxWidth)
          line += " ";
      }

      // Fully justify
      else {

        int evenSpaces = spaces / gaps;
        int extraSpaces = spaces % gaps;

        for (int k = i; k < j; k++) {

          line += words[k];

          if (k < j - 1) {

            int count = evenSpaces;

            if (extraSpaces > 0) {
              count++;
              extraSpaces--;
            }

            line += string(count, ' ');
          }
        }
      }

      ans.push_back(line);
      i = j;
    }

    return ans;
  }
};
