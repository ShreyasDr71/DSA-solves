class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int minLen = INT_MAX;
        for(string word : strs){
            minLen = min(minLen, (int)word.length());
        }

        string prefix = "";

        for(int pos = 0; pos < minLen; pos++){

            char current = strs[0][pos];

            for(int i = 1; i < strs.size(); i++){
                if(strs[i][pos] != current){
                    return prefix;
                }
            }

            prefix += current;
        }

        return prefix;
    }
};
