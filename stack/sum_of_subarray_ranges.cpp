class Solution {
public:
    void findpse(vector<int> &pse,vector<int>& arr,int n){
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]) st.pop();
            pse[i]=st.empty()?-1:st.top();
            st.push(i);
        }
    }
    void findnse(vector<int> &nse,vector<int>& arr,int n){
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
            nse[i]=st.empty()?n:st.top();
            st.push(i);
        }
    }
    void findpge(vector<int> &pge,vector<int>& arr,int n){
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]<arr[i]) st.pop();
            pge[i]=st.empty()?-1:st.top();
            st.push(i);
        }
    }
    void findnge(vector<int> &nge,vector<int>& arr,int n){
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]<=arr[i]) st.pop();
            nge[i]=st.empty()?n:st.top();
            st.push(i);
        }
    }
    long long subArrayRanges(vector<int>& arr) {
        int n=arr.size();
        vector<int> pse(n),nse(n),pge(n),nge(n);
        findpse(pse,arr,n);
        findnse(nse,arr,n);
        findpge(pge,arr,n);
        findnge(nge,arr,n);
        long long sum_max=0,sum_min=0;
        for(int i=0;i<n;i++){
            long long left_min=i-pse[i];
            long long right_min=nse[i]-i;
            sum_min+=(1LL*left_min*right_min*arr[i]);
            long long left_max=i-pge[i];
            long long right_max=nge[i]-i;
            sum_max+=(1LL*left_max*right_max*arr[i]);
        }
        return (sum_max-sum_min);
    }
};
