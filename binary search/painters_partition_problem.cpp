class Solution {
  public:
    int timeTaken(vector<int>& arr,int maxTime){
        int n=arr.size();
        int timeTook=0,painters=1;
        for(int i=0;i<n;i++){
            if((timeTook+arr[i])>maxTime){
                painters++;
                timeTook=arr[i];
            } else{
                timeTook+=arr[i];
            }
        }
        return painters;
    }
    int minTime(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int low=*max_element(arr.begin(),arr.end());
        int high=0;
        for(int i=0;i<n;i++){
            high+=arr[i];
        }
        while(low<=high){
            int mid=(high-low)/2+low;
            if(timeTaken(arr,mid)<=k){
                high=mid-1;
            } else low=mid+1;
        }
        return low;
    }
};
