class Solution {
public:
    bool detectCapitalUse(string word) {
        int count=0;
        for(char ch:word){
            if(isupper(ch)) count++;
        }
        for(char ch:word){
            if(count==word.length()) return true;
            if(count==0) return true;
            if(count==1 && isupper(word[0])) return true;
        }
        return false;
    }
};
