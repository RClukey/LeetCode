class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;
        int profit = 0, minCost = prices[0];

        for (int i = 1; i < prices.size(); ++i)
        {
            if (prices[i] < minCost) minCost = prices[i];
            else if (prices[i] - minCost > profit) profit = prices[i] - minCost;
        }
        return profit;
    }
};
