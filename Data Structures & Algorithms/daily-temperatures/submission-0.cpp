class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> v;
        for(int i=0;i<t.size();i++)
        {
            v.push_back(0);
        }
        stack<int> st;
        for(int i=0;i<t.size();i++)
        {
            if(st.empty())
            {
                st.push(i);
                continue;
            }
            while(!st.empty() && t[i]>t[st.top()])
            {
                v[st.top()]=i-st.top();
                st.pop();
            }
            st.push(i);
            
        }
        
        return v;
    }
};