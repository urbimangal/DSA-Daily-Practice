class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> res;
        deque<int> dq;
        for(int i=0;i<n;i++){
            while(!dq.empty() && arr[dq.back()]<=arr[i]) dq.pop_back();
            if(!dq.empty() && dq.front()<(i-k+1)) dq.pop_front();
            dq.push_back(i);
            if(i>=(k-1)) res.push_back(arr[dq.front()]);
        }
        return res;
    }
};
