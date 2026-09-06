class StockSpanner {
public:
    stack<pair<int,int>> st;
    
    
    int next(int price) {
        if(st.empty())
        {
            st.push({price,1});
            return st.top().second;
        }
        else if(st.top().first<=price)
        {
            int t=1;
            while(!st.empty() && st.top().first<=price)
            {
                t+=st.top().second;
                st.pop();
                
            }
            st.push({price,t});
            return st.top().second;
        }
        else
        {
            st.push({price,1});
            return 1;
        }
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */