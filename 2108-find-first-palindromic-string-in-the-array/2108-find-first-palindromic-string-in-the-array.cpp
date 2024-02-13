class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0; i<words.size(); i++) {
            string word=words[i];
            reverse(word.begin(), word.end());
            if(words[i]==word) return words[i];
        }
        return "";
    }
};