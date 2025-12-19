class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int n=s.length();
        int l=0,r=0,maxLen=-1;
        unordered_map<char,int> map;
        while(r<n){
            map[s[r]]++;
            if(map.size()==k){
                int len=r-l+1;
                maxLen=max(maxLen,len);
            } 
            else if(map.size()>k){
                if(map.size()>k){
                    map[s[l]]--;
                    if(map[s[l]]==0) map.erase(s[l]);
                    l++;
                }
            }
            r++;
        }
        return maxLen;
    }
};
