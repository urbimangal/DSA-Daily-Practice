class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n=arr.size();
        int ans=INT_MAX;
        int idx=-1;
        int low=0,high=n-1;
        while(low<=high){
            int mid=(high-low)/2+low;
            if(arr[low]<=arr[high]){
                if(arr[low]<ans){
                    idx=low;
                    ans=arr[low];
                }
                break;
            }
            if(arr[low]<=arr[mid]){
                if(arr[low]<ans){
                    idx=low;
                    ans=arr[low];
                }
                low=mid+1;
            }
            else{
                if(arr[mid]<ans){
                    idx=mid;
                    ans=arr[mid];
                }
                high=mid-1;
            }
        }
        return idx;
    }
};
