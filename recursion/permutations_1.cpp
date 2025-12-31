class Solution {
public:
    void func(vector<int>& arr,vector<int>& ds,vector<int>& freq,vector<vector<int>>& ans){
        int n=arr.size();
        if(n==ds.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<n;i++){
            if(freq[i]==0){
                ds.push_back(arr[i]);
                freq[i]=1;
                func(arr,ds,freq,ans);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& arr) {
        int n=arr.size();
        vector<int> ds;
        vector<int> freq(n,0);
        vector<vector<int>> ans;
        func(arr,ds,freq,ans);
        return ans;
    }
};
