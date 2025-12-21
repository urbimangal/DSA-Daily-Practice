// User function Template for C++

class Solution {
  public:
    string postToPre(string s) {
        // Write your code here
        int n=s.length();
        int i=0;
        stack<string> st;
        while(i<n){
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
                st.push(string(1,s[i]));
            }
            else{
                string t1=st.top();
                st.pop();
                string t2=st.top();
                st.pop();
                string op=s[i]+t2+t1;
                st.push(op);
            }
            i++;
        }
        return st.top();
    }
};
