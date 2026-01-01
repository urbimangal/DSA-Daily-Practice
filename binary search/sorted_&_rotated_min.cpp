class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        int n=arr.size();
        int ans=INT_MAX;
        int low=0,high=n-1;
        while(low<=high){
            int mid=(high-low)/2+low;
            if(arr[low]<=arr[mid]){
                ans=min(ans,arr[low]);
                low=mid+1;
            } else{
                ans=min(ans,arr[mid]);
                high=mid-1;
            }
        }
        return ans;
    }
};
