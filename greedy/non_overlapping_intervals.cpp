1class Solution {
2public:
3    int eraseOverlapIntervals(vector<vector<int>>& mat) {
4        int n=mat.size();
5        sort(mat.begin(),mat.end(),
6        [](vector<int>& a,vector<int>& b){
7            return a[1]<b[1];
8        });
9        int count=1;
10        int prevEnd=mat[0][1];
11        for(int i=1;i<n;i++){
12            if(mat[i][0]>=prevEnd){
13                count++;
14                prevEnd=mat[i][1];
15            }
16        }
17        int ans=mat.size()-count;
18        return ans;
19    }
20};
