class Solution {
public:
    int countingSetBits(int n){
        int count=0;
        while(n!=0){
            count++;
            n=n & (n-1);
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            ans.push_back(countingSetBits(i));
        }
        return ans;
    }
};
