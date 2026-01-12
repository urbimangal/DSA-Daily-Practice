class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int i=0,j=0,count=0,maxCount=0;
        while(i<n && j<n){
            if(arr[i]<=dep[j]){
                count++;
                i++;
            } else{
                count--;
                j++;
            }
            maxCount=max(maxCount,count);
        }
        return maxCount;
    }
};
