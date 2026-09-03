class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;
        int f=1;
        for(int i=0;i<a.size();i++)
        {
            st.push(a[i]);
            if(st.size()==1)continue;
            if(st.top()<0)
            {
                f=1;
                int t=st.top();
                st.pop();
                while(!st.empty() && st.top()>0)
                {
                    if(st.top()>abs(t))
                    {
                        f=0;
                        break;
                    }
                    else if(st.top()==abs(t)){
                        f=0;
                        st.pop();
                        break;
                    }
                    else{
                        f=1;
                        st.pop();
                    }
                }
                if(f==1)
                {
                    st.push(t);
                }
            }
        }
        vector<int> p;
        while(!st.empty())
        {
            p.push_back(st.top());
            st.pop();
        }
        reverse(p.begin(),p.end());
        return p;
    }
};