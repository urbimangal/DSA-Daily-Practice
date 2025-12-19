class Solution {
public:
    int longestOnes(vector<int>& arr, int k) {
        int n=arr.size();
        int zeroes=0;
        int l=0,r=0,maxLen=0;
        while(r<n){
            if(arr[r]==0) zeroes++;
            if(zeroes<=k){
                int len=r-l+1;
                maxLen=max(maxLen,len);
            }
            while(zeroes>k){
                if(arr[l]==0) zeroes--;
                l++;
            }
            r++;
        }
        return maxLen;
    }
};
