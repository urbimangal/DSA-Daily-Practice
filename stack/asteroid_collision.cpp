class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        int n=arr.size();
        vector<int> res;
        stack<int> st;
        for(int i=0;i<n;i++){
            bool exploded=false;
            if(arr[i]>0){
                st.push(arr[i]);
                continue;
            }
            while(!st.empty() && st.top()>0 && st.top()<abs(arr[i])) st.pop();
            if(!st.empty() && st.top()==abs(arr[i])){
                st.pop();
                exploded=true;
            }
            else if(!st.empty() && st.top()>abs(arr[i])) exploded=true;
            if(!exploded){
                st.push(arr[i]);
            }
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
