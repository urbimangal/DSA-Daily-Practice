class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(arr[i]==2){ 
                ans.push_back(-1);
                continue; 
            }
            for(int j=0;j<32;j++){
                if((arr[i] & (1<<j))>0) continue;
                int prev=j-1;
                int x=(arr[i]^(1<<(j-1)));
                ans.push_back(x);
                break;
            }
        }
        return ans;
    }
};
