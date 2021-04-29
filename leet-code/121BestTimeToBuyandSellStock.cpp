// Problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxProfit = 0, maxCurrent = 0;
        
        for(int i = 1; i < prices.size(); i++){
            maxCurrent = max(0, maxCurrent + prices[i] - prices[i - 1]);
            maxProfit = max(maxProfit, maxCurrent);
        }
        
        return maxProfit;
    }
};
