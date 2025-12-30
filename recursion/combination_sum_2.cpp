class Solution {
public:
    void func(vector<int>& arr,int ind,int tar,vector<int>& ds,vector<vector<int>>& ans){
        int n=arr.size();
        if(tar==0){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<n;i++){
            if(i>ind && arr[i]==arr[i-1]) continue;
            if(arr[i]>tar) break;
            ds.push_back(arr[i]);
            func(arr,i+1,tar-arr[i],ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& arr,int tar) {
        sort(arr.begin(),arr.end());
        vector<int> ds;
        vector<vector<int>> ans;
        func(arr,0,tar,ds,ans);
        return ans;
    }
};
