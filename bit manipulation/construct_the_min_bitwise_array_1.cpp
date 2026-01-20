class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            bool found=false;
            for(int x=0;x<arr[i];x++){
                if((x | (x+1))==arr[i]){
                    ans.push_back(x);
                    found=true;
                    break;
                }
            }
            if(found==false) ans.push_back(-1);
        }
        return ans;
    }
};
