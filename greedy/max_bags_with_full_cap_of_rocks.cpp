class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n=capacity.size();
        vector<int> required;
        int count=0;
        for(int i=0;i<n;i++){
            int capacity_rock=capacity[i];
            int current_rock=rocks[i];
            int diff=capacity_rock-current_rock;
            required.push_back(diff);
        }
        sort(required.begin(),required.end());
        for(int i=0;i<n;i++){
            if(required[i]==0) count++;
            else if(additionalRocks>=required[i]){
                additionalRocks-=required[i];
                count++;
            }
        }
        return count;
    }
};
