class Solution {
  public:
    int largestPrimeFactor(int n) {
        // code here
        int max_num=INT_MIN;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                max_num=max(max_num,i);
                while(n%i==0){
                    n/=i;
                }
            }
        }
        if(n!=1) max_num=max(max_num,n);
        return max_num;
    }
};
