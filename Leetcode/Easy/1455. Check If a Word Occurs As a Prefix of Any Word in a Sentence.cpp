class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int currentWord = 1;
        int n = sentence.size();
        int ptr1 = 0;
        int ptr2 = 0;
        int size = searchWord.size();
        while (ptr1 < n) {
            while (sentence[ptr1] == ' ')
                ptr1++;
            while (ptr1 < n && sentence[ptr1] != ' ' && ptr2 < size) {
                if (sentence[ptr1] != ' ' &&
                    sentence[ptr1] == searchWord[ptr2]) {
                    ptr1++;
                    ptr2++;
                } else {
                    while (ptr1 < n && sentence[ptr1] != ' ')
                        ptr1++;
                    break;
                }

                if (ptr2 == size)
                    return currentWord;
            }
            ptr2 = 0;
            currentWord++;
        }
        return -1;
    }
};
