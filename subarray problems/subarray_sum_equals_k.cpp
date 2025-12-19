class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int sum=0,count=0;
        int n=nums.size();
        map[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            count+=map[sum-k];
            map[sum]++;
        }
        return count;
    }
};
