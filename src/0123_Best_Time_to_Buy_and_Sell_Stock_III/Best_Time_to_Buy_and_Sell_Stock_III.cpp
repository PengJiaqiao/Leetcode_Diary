class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        if(prices.empty()) return 0;
        int buy1 = -prices[0], sell1 = 0, buy2 = buy1, sell2 = 0;
        for (unsigned int i = 1; i < prices.size(); i++)
        {
            buy1 = max(buy1, - prices[i]);
            sell1 = max(sell1, buy1 + prices[i]);
            buy2 = max(buy2, sell1 - prices[i]);
            sell2 = max(sell2, buy2 + prices[i]);
        }
        return max(0, sell2);
    }
};
