class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=(high-low)/2+low;
            int missing=arr[mid]-(mid+1);
            if(missing<k) low=mid+1;
            else high=mid-1;
        }
        return high+k+1;
    }
};
