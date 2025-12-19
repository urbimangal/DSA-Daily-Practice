class Solution {
public:
    int totalFruit(vector<int>& arr) {
        int n=arr.size();
        int l=0,r=0,maxLen=0;
        unordered_map<int,int> map;
        while(r<n){
            map[arr[r]]++;
            if(map.size()<=2){
                int len=r-l+1;
                maxLen=max(maxLen,len);
            } else{
                if(map.size()>2){
                    map[arr[l]]--;
                    if(map[arr[l]]==0) map.erase(arr[l]);
                    l++;
                }
            }
            r++;
        }
        return maxLen;
    }
};
