class Solution {
public:
    long long func(vector<int>& arr,int k){
        int n=arr.size();
        long long count=0,sum=0,l=0,r=0;
        if(k<0) return 0;
        while(r<n){
            sum+=(arr[r]%2);
            while(sum>k){
                sum-=(arr[l]%2);
                l++;
            }
            count+=(r-l+1);
            r++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return func(nums,k)-func(nums,k-1);
    }
};
