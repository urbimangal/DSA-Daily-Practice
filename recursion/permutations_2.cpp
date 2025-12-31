class Solution {
public:
    void func(vector<int>& arr,int ind,vector<vector<int>>& ans){
        int n=arr.size();
        if(n==ind){
            ans.push_back(arr);
            return;
        }
        unordered_set<int> set;
        for(int i=ind;i<n;i++){
            if(set.count(arr[i])) continue;
            set.insert(arr[i]);
            swap(arr[i],arr[ind]);
            func(arr,ind+1,ans);
            swap(arr[i],arr[ind]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& arr) {
        vector<vector<int>> ans;
        func(arr,0,ans);
        return ans;
    }
};
