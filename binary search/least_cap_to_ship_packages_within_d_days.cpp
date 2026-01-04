// User function Template for C++

class Solution {
  public:
    int noOfDays(int arr[],int n,int cap){
        int load=0,day=1;
        for(int i=0;i<n;i++){
            if((load+arr[i])>cap){
                day++;
                load=arr[i];
            } else{
                load+=arr[i];
            }
        }
        return day;
    }
    int leastWeightCapacity(int arr[], int n, int d) {
        // code here
        int low=*max_element(arr,arr+n);
        int high=0;
        for(int i=0;i<n;i++){
            high+=arr[i];
        }
        int ans=-1;
        while(low<=high){
            int mid=(high-low)/2+low;
            if(noOfDays(arr,n,mid)<=d){
                ans=mid;
                high=mid-1;
            } else low=mid+1;
        }
        return ans;
    }
};
