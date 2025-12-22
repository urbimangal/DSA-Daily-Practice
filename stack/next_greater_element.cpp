class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums, vector<int>& arr) {
        int n=nums.size(),m=arr.size();
        vector<int> ans;
        stack<int> st;
        unordered_map<int,int> mp;
        for(int i=m-1;i>=0;i--){
            while(!st.empty() && st.top()<arr[i]) st.pop();
            if(st.empty()) mp[arr[i]]=-1;
            else mp[arr[i]]=st.top();
            st.push(arr[i]);
        }
        for(int i=0;i<n;i++){
            ans.push_back(mp[nums[i]]);
        }
        return ans;
    }
};
