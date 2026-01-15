class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1=num1.size();
        int n2=num2.size();
        if(n2>n1) return addStrings(num2,num1);
        int i=n1-1,j=n2-1;
        string ans="";
        int carry=0,sum;
        while(j>=0){
            sum=num1[i]-'0'+num2[j]-'0'+carry;
            carry=sum/10;
            ans+=('0'+(sum%10));
            j--;
            i--;
        }
        while(i>=0){
            sum=num1[i]-'0'+carry;
            carry=sum/10;
            ans+=('0'+(sum%10));
            i--;
        }
        if(carry){
            ans+='1';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
