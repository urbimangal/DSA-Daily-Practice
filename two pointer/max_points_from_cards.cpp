class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int lsum=0,rsum=0,maxSum=0;
        int n=arr.size();
        for(int i=0;i<k;i++){
            lsum+=arr[i];
        }
        maxSum=lsum;
        int r=n-1;
        for(int i=k-1;i>=0;i--){
            lsum-=arr[i];
            rsum+=arr[r];
            r--;
            int sum=lsum+rsum;
            maxSum=max(maxSum,sum);
        }
        return maxSum;
    }
};
