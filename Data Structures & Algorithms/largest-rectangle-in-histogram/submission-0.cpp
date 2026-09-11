class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        vector<int> lmax,rmax;
        for(int i=0;i<h.size();i++)
        {
            lmax.push_back(0);
            rmax.push_back(0);
        }
        int m=0;
        stack<int> st;
        for(int i=0;i<h.size();i++)
        {
            if(st.empty())
            {
                st.push(i);
                continue;
            }
            while(!st.empty() && h[i]<h[st.top()])
            {
                lmax[st.top()]=i-st.top()-1;
                st.pop();
            }
            st.push(i);
        }
        while (!st.empty()) {
            lmax[st.top()] = h.size() - st.top() - 1;
            st.pop();
        }
        
        for(int i=h.size()-1;i>=0;i--)
        {
            if(st.empty())
            {
                st.push(i);
                continue;
            }
            while(!st.empty() && h[i]<h[st.top()])
            {
                rmax[st.top()]=st.top()-i-1;
                st.pop();
            }
            st.push(i);
        }

        while (!st.empty()) {
            rmax[st.top()] = st.top();
            st.pop();
        }
        int ma=0;
        for(int i=0;i<h.size();i++)
        {
            int a=h[i]*(lmax[i]+rmax[i]+1);
            ma=max(ma,a);
        }
        if(h.size()==1)return h[0];
        return ma;
    }
};