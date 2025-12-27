class Solution {
public:
    int maxRectArea(vector<int>& arr){
        stack<int> st;
        int maxArea=0;
        arr.push_back(0);
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                int height=arr[st.top()];
                st.pop();
                int width=st.empty()?i:i-st.top()-1;
                maxArea=max(maxArea,height*width);
            }
            st.push(i);
        }
        arr.pop_back();
        return maxArea;
    }
    int maximalRectangle(vector<vector<char>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<int> arr(m,0);
        int maxArea=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]=='1') arr[j]++;
                else arr[j]=0;
            }
            maxArea=max(maxArea,maxRectArea(arr));
        }
        return maxArea;
    }
};
