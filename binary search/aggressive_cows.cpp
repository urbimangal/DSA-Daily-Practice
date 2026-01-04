class Solution {
  public:
    bool noOfCows(vector<int>& arr,int dist,int cows){
        int n=arr.size();
        int count=1,last=arr[0];
        for(int i=1;i<n;i++){
            if((arr[i]-last)>=dist){
                count++;
                last=arr[i];
            }
        }
        return count>=cows;
    }
    int aggressiveCows(vector<int> &arr, int cows) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int low=1;
        int high=*max_element(arr.begin(),arr.end())-*min_element(arr.begin(),arr.end());
        int ans=-1;
        while(low<=high){
            int mid=(high-low)/2+low;
            if(noOfCows(arr,mid,cows)){
                ans=mid;
                low=mid+1;
            } else high=mid-1;
        }
        return ans;
    }
};
