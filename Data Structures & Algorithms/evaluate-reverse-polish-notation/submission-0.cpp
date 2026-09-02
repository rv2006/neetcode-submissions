class Solution {
public:
    int priority(string s)
        {
            if(s=="*")
            {
                return 1;
            }
            else if(s=="/"){
                return 2;
            }
            else if(s=="+")
            {
                return 3;
            }
            return 4;
        }
        
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]!="/" && tokens[i]!="*" && tokens[i]!="+" && tokens[i]!="-")
            {
                st.push(stoi(tokens[i]));
            }
            else
            {
                int p=priority(tokens[i]);
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                switch(p)
                {
                    case 1:
                       st.push(a*b);
                       break;
                    case 2:
                        st.push(b/a); 
                        break;
                    case 3:
                        st.push(a+b);
                        break;
                    case 4:
                        st.push(b-a);
                        break;
                }
            }
        }
        return st.top();
    }
};