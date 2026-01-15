class Solution {
public:
    string sortVowels(string s) {
        int n=s.length();
        vector<int> upper(26,0);
        vector<int> lower(26,0);
        for(int i=0;i<n;i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                upper[s[i]-'A']++;
                s[i]='#';
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                lower[s[i]-'a']++;
                s[i]='#';
            }
        }
        string ans="";
        for(int i=0;i<26;i++){
            char c='A'+i;
            while(upper[i]>0){
                ans+=c;
                upper[i]--;
            }
        }
        for(int i=0;i<26;i++){
            char c='a'+i;
            while(lower[i]>0){
                ans+=c;
                lower[i]--;
            }
        }
        int i=0,j=0;
        while(i<ans.size()){
            if(s[j]=='#'){
                s[j]=ans[i];
                i++;
            }
            j++;
        }
        return s;
    }
};
