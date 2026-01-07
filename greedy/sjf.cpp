// User function Template for C++

//Back-end complete function Template for C++

class Solution {
  public:
    long long solve(vector<int>& arr) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int t=0,wt=0;
        for(int i=0;i<n;i++){
            wt+=t;
            t+=arr[i];
        }
        return (wt/n);
    }
};
