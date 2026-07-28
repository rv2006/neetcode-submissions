class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        for(int i=0;i<prices.size()-1;i++)
        {
            int buy=prices[i];           
            if(prices[i+1]>prices[i])
            {
                int sell=prices[i+1];
                profit+=sell-buy;                                
            }
        }
        return profit;
    }
};