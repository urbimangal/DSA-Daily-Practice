class Solution {
public:
    int compress(vector<char>& str) {
        int n=str.size();
        int i=0,index=0;
        while(i<n){
            char curr_char=str[i];
            int count=0;
            while(i<n && curr_char==str[i]){
                count++;
                i++;
            }
            str[index]=curr_char;
            index++;
            string count_char=to_string(count);
            if(count>1){
                for(char& ch:count_char){
                    str[index]=ch;
                    index++;
                }
            }
        }
        return index;
    }
};
