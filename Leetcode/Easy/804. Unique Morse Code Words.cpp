class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> temp = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        vector<string> m;
        for(int i = 0; i < words.size(); i++){
            string s = words[i];
            string morse = "";
            for(int j = 0; j < s.size(); j++){
                int n = s[j] - 'a';
                morse += temp[n];
            }
            m.push_back(morse);
        }
        int count = 0;
        for(int i = 0; i < m.size(); i++){
            for(int j = 0; j < m.size(); j++){
                if(i != j && m[i] != "" && m[j] != "" && m[i] == m[j]) m[j] = "";
            }
            if(m[i] != "") count++;
        }
        return count;
    }
};
