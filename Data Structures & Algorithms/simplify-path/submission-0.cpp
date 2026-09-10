class Solution {
public:
    vector<string> split(string s, char delimiter) {
    vector<string> ans;
    string temp;

    stringstream ss(s);

    while (getline(ss, temp, delimiter)) {
        ans.push_back(temp);
    }

    return ans;
    }
    string simplifyPath(string path) {
        stack<string> st;
        vector<string> s=split(path,'/');
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=="")continue;
            else if(s[i]=="..")
            {
                if(!st.empty())
                {
                    st.pop();
                }
                else{
                    continue;
                }
            }
            else if(s[i]==".")continue;
            else{
                st.push(s[i]);
            }
            
        }
        
        string ans="";
        while(!st.empty())
        {
            ans="/"+ st.top()+ans;
            st.pop();
        }
        if(ans=="")return "/";
        return ans;
    }
};