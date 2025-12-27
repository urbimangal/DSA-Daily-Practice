class Solution {
public:
    string removeKdigits(string arr, int k) {
        int n=arr.size();
        stack<char> st;
        string str="";
        for(int i=0;i<n;i++){
            while(!st.empty() && k>0 && (st.top()-'0')>(arr[i]-'0')){
                st.pop();
                k--;
            }
            st.push(arr[i]);
        }
        while(!st.empty() && k>0){
            st.pop();
            k--;
        }
        if(st.empty()) return "0";
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        int idx=0;
        while(idx<str.size() && str[idx]=='0') idx++;
        str=str.substr(idx);
        return str.empty()?"0":str;
    }
};
