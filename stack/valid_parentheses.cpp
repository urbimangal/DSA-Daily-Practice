class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        stack<char> st;
        for(int ch:s){
            if(ch=='(' || ch=='[' || ch=='{'){
                st.push(ch);
            } else{
                if(st.empty()) return false;
                int el=st.top();
                if((el=='(' && ch==')') || (el=='[' && ch==']') || (el=='{' && ch=='}')){
                    st.pop();
                } else return false;
            }
        }
        return st.empty();
    }
};
