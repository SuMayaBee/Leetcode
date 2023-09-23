class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices[0];
        int maxprofit=0;

        for(int i=1; i<prices.size(); i++) {
            if(minprice>prices[i]) {
                minprice = prices[i];
            } else {
                int profit = prices[i] - minprice;
                if(profit>maxprofit) {
                    maxprofit = profit;
                }
            }
        }
        
        return maxprofit;
    }
};