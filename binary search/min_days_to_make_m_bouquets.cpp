class Solution {
  public:
    bool possibility(vector<int>& arr,int day,int k,int m){
        int n=arr.size();
        int count=0,bouquets=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=day){
                count++;
            } else{
                bouquets+=(count/k);
                count=0;
            }
        }
        bouquets+=(count/k);
        if(bouquets>=m) return true;
        else return false;
    }
    int minDaysBloom(vector<int>& arr, int k, int m) {
        // Code here
        int n=arr.size();
        if(n<m*k) return -1;
        int ans=-1;
        int low=*min_element(arr.begin(),arr.end());
        int high=*max_element(arr.begin(),arr.end());
        while(low<=high){
            int mid=(high-low)/2+low;
            if(possibility(arr,mid,k,m)==true){
                ans=mid;
                high=mid-1;
            } else low=mid+1;
        }
        return ans;
    }
};
