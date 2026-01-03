class Solution {
  public:
    int maxElement(vector<int>& arr,int n){
        int maxEl=INT_MIN;
        for(int i=0;i<n;i++){
            maxEl=max(maxEl,arr[i]);
        }
        return maxEl;
    }
    long long totalHours(vector<int>& arr,int n,int mid){
        long long hours=0;
        for(int i=0;i<n;i++){
            hours+=(arr[i]+mid-1)/mid;
        }
        return hours;
    }
    int kokoEat(vector<int>& arr, int h) {
        // Code here
        int n=arr.size();
        int low=1,high=maxElement(arr,n);
        int ans=-1;
        while(low<=high){
            int mid=(high-low)/2+low;
            long long hours=totalHours(arr,n,mid);
            if(hours<=h){
                ans=mid;
                high=mid-1;
            } else low=mid+1;
        }
        return ans;
    }
};
