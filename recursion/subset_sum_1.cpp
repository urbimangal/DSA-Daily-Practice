class Solution {
  public:
    void func(vector<int>& arr,int i,int sum,vector<int>& ans){
        int n=arr.size();
        if(i==n){
            ans.push_back(sum);
            return;
        }
        sum+=arr[i];
        func(arr,i+1,sum,ans);
        sum-=arr[i];
        func(arr,i+1,sum,ans);
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int> ans;
        func(arr,0,0,ans);
        return ans;
    }
};
