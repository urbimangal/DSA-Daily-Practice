class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length(),m=t.length();
        int minLen=INT_MAX,count=0,sidx=-1;
        int l=0,r=0;
        if(m>n) return "";
        vector<int> hash(256,0);
        for(int i=0;i<m;i++){
            hash[t[i]]++;
        }
        while(r<n){
            if(hash[s[r]]>0) count++;
            hash[s[r]]--;
            while(count==m){
                int len=r-l+1;
                if(len<minLen){
                    minLen=len;
                    sidx=l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0) count--;
                l++;
            }
            r++;
        }
        return (minLen==INT_MAX) ? "" : s.substr(sidx,minLen);
    }
};
