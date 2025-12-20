class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int l=0,r=0,maxLen=0,maxFreq=0;
        unordered_map<char,int> map;
        while(r<n){
            map[s[r]]++;
            maxFreq=max(maxFreq,map[s[r]]);
            int replace=(r-l+1)-maxFreq;
            if(replace<=k){
                int len=r-l+1;
                maxLen=max(maxLen,len);
            } else{
                map[s[l]]--;
                if(map[s[l]]==0) map.erase(s[l]);
                l++;
            }
            r++;
        }
        return maxLen;
    }
};
