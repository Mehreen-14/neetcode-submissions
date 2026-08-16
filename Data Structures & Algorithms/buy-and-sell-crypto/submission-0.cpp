class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int minimum = prices[0];
        int n = prices.size();
        for(int i=1;i<n;i++){
            if(prices[i]<minimum) minimum = prices[i];
            else maxprofit = max(maxprofit,prices[i]-minimum);
        }
        return maxprofit;
        
    }
};
