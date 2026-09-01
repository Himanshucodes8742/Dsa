class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minTerm=prices[0];
        int n=prices.size();
        int maxProfit=0;
        for(int i=0;i<n;i++){
            minTerm=min(minTerm,prices[i]);
                 maxProfit=max(maxProfit,prices[i]-minTerm);
            
        }
        return maxProfit;
    }
};