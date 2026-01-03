class Solution {
  public:
    long long summation(vector<int>& arr,int mid,int k){
        int n=arr.size();
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=(arr[i]+mid-1)/mid;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& arr, int k) {
        // Code here
        int n=arr.size();
        int low=1,high=*max_element(arr.begin(),arr.end());
        if(k<n) return -1;
        int ans=-1;
        while(low<=high){
            int mid=(high-low)/2+low;
            if(summation(arr,mid,k)<=k){
                ans=mid;
                high=mid-1;
            } else low=mid+1;
        }
        return ans;
    }
};
