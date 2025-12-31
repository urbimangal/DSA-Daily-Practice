class Solution {
public:
    void func(vector<int>& arr,int ind,vector<int>& ds,vector<vector<int>>& ans){
        int n=arr.size();
        ans.push_back(ds);
        for(int i=ind;i<n;i++){
            if(i!=ind && arr[i]==arr[i-1]) continue;
            ds.push_back(arr[i]);
            func(arr,i+1,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(arr.begin(),arr.end());
        func(arr,0,ds,ans);
        return ans;
    }
};
