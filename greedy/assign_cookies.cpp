class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size(),m=s.size();
        int l=0,r=0,count=0;
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        while(l<m && r<n){
            if(s[l]>=g[r]){
                count++;
                l++;
                r++;
            } else l++;
        }
        return count;
    }
};
