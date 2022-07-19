class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = -pow(10, 4);
        for(int i = 0; i < prices.size(); i++) {
            profit = (prices[i] - buy > profit) ? prices[i] - buy: profit;
            if(prices[i] < buy) {
                buy = prices[i];
            }
        }
        return profit;
    }
};