class Solution {
public:
    bool isValid(string str) {
        stack <char> st;
        if(str.length()%2!=0)return false;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='(' || str[i]=='[' || str[i]=='{')
            {
                st.push(str[i]);
            }
            else if(str[i]==')' && !st.empty() && st.top()=='('){
                st.pop();
            }
            else if(str[i]==']' && !st.empty() && st.top()=='['){
                st.pop();
            }
            else if(str[i]=='}' &&  !st.empty() && st.top()=='{')
            {
                st.pop();
            }
            else{
                return false;
            }
        }
        if(st.empty()){
        return true;
        }
        return false;
    }
};