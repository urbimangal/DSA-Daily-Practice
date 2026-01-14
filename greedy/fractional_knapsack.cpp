class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int n=val.size();
        vector<pair<double,pair<int,int>>> items;
        for(int i=0;i<n;i++){
            double fraction=(double)val[i]/wt[i];
            items.push_back({fraction,{val[i],wt[i]}});
        }
        sort(items.begin(),items.end(),greater<>());
        double totalValue=0.0;
        for(int i=0;i<n;i++){
            double value=items[i].second.first;
            double weight=items[i].second.second;
            if(weight<=capacity){
                totalValue+=value;
                capacity-=weight;
            } else{
                totalValue+=(items[i].first*capacity);
                capacity=0;
            }
        }
        return totalValue;
    }
};
