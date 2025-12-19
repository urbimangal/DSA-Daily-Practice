class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        unordered_map<long long,int> map;
        long long sum=0;
        int maxLen=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==k){
                maxLen=max(maxLen,i+1);
            }
            long long rem=sum-k;
            if(map.find(rem)!=map.end()){
                int len=i-map[rem];
                maxLen=max(maxLen,len);
            }
            if(map.find(sum)==map.end()){
                map[sum]=i;
            }
        }
        return maxLen;
    }
};
