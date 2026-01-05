// User function template for C++
class Solution {
  public:
    int firstOccuranceOfOne(vector<int>& arr,int m,int x){
        int low=0,high=m-1,ans=m;
        while(low<=high){
            int mid=(high-low)/2+low;
            if(arr[mid]>=x){
                ans=mid;
                high=mid-1;
            } else low=mid+1;
        }
        return ans;
    }
    int rowWithMax1s(vector<vector<int>> &mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        int index=-1,maxCount=0;
        for(int i=0;i<n;i++){
            int count=m-firstOccuranceOfOne(mat[i],m,1);
            if(count>maxCount){
                maxCount=count;
                index=i;
            }
        }
        return index;
    }
};
