class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        int n1=a.size(),n2=b.size();
        int n=n1+n2;
        if(n2>n1) return kthElement(b,a,k);
        int low=max(0,k-n2),high=min(k,n1); 
        while(low<=high){
            int mid1=(high-low)/2+low;
            int mid2=k-mid1;
            int l1=INT_MIN,l2=INT_MIN;
            int r1=INT_MAX,r2=INT_MAX;
            if(mid1<n1) r1=a[mid1];
            if(mid2<n2) r2=b[mid2];
            if(mid1-1>=0) l1=a[mid1-1];
            if(mid2-1>=0) l2=b[mid2-1];
            if(l1<=r2 && l2<=r1){
                return max(l1,l2);
            }
            if(l2>r1) low=mid1+1;
            else high=mid1-1;
        }
        return 0;
    }
};
