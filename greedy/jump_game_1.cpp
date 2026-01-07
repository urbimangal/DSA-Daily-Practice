class Solution {
public:
    bool canJump(vector<int>& arr) {
        int n=arr.size();
        int maxIdx=0;
        for(int i=0;i<n;i++){
            if(i>maxIdx) return false;
            maxIdx=max(maxIdx,i+arr[i]);
        }
        return true;
    }
};
