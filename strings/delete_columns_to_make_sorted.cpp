class Solution {
public:
    int minDeletionSize(vector<string>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int count=0;
        for(int j=0;j<m;j++){
            for(int i=1;i<n;i++){
                if(mat[i-1][j]>mat[i][j]){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};
