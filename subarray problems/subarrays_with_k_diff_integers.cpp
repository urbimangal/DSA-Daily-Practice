class Solution {
public:
    long long func(vector<int>& nums,int k){
        int n=nums.size();
        long long count=0,l=0,r=0;
        unordered_map<int,int> map;
        if(k<0) return 0;
        while(r<n){
            map[nums[r]]++;
            while(map.size()>k){
                map[nums[l]]--;
                if(map[nums[l]]==0) map.erase(nums[l]);
                l++;
            }
            count+=(r-l+1);
            r++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return func(nums,k)-func(nums,k-1);
    }
};
