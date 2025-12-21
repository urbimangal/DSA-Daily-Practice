// User function Template for C++

class Solution {
  public:
    string preToPost(string s) {
        int n=s.length();
        int i=n-1;
        stack<string> st;
        while(i>=0){
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
                st.push(string(1,s[i]));
            } else{
                string t1=st.top();
                st.pop();
                string t2=st.top();
                st.pop();
                string op=t1+t2+s[i];
                st.push(op);
            }
            i--;
        }
        return st.top();
    }
};
