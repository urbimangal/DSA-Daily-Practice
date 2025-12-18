class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        vector<int> hash(256,-1);
        int l=0,r=0,maxLen=INT_MIN;
        while(r<n){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1;
                }
            }
            int len=r-l+1;
            maxLen=max(maxLen,len);
            hash[s[r]]=r;
            r++;
        }
        return (s!="") ? maxLen : 0;
    }
};
