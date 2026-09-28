class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int mp=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
            {
                min=prices[i];
                continue;
            }
            int s=prices[i]-min;
            mp=max(s,mp);
        }
        return mp;
    }
};