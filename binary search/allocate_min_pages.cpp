class Solution {
  public:
    int allocationOfPages(vector<int>& arr,int maxPages){
        int n=arr.size();
        int students=1,pages=0;
        for(int i=0;i<n;i++){
            if((pages+arr[i])>maxPages){
                students++;
                pages=arr[i];
            } else{
                pages+=arr[i];
            }
        }
        return students;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        if(k>n) return -1;
        int low=*max_element(arr.begin(),arr.end());
        int high=0;
        for(int i=0;i<n;i++){
            high+=arr[i];
        }
        int ans=-1;
        while(low<=high){
            int mid=(high-low)/2+low;
            if(allocationOfPages(arr,mid)<=k){
                ans=mid;
                high=mid-1;
            } else low=mid+1;
        }
        return ans;
    }
};
