class Solution {
public:
    void func(vector<int>& arr,int i,int tar,vector<int>& ds,vector<vector<int>>& ans){
        int n=arr.size();
        if(i==n){
            if(tar==0) ans.push_back(ds);
            return;
        }
        if(arr[i]<=tar){
            ds.push_back(arr[i]);
            func(arr,i,tar-arr[i],ds,ans);
            ds.pop_back();
        }
        func(arr,i+1,tar,ds,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int tar) {
        vector<int> ds;
        vector<vector<int>> ans;
        func(arr,0,tar,ds,ans);
        return ans;
    }
};
