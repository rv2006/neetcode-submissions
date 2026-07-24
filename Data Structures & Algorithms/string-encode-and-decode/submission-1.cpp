class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(int i=0;i<strs.size();i++)
        {
            int n=strs[i].length();
            s+=strs[i]+"`";
            
        }
        cout<<s;
        return s;
    }

    vector<string> decode(string s) {
        vector<string> v;
        int k=s[0];
        string t;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='`')
            {
                v.push_back(t);
                t="";
                continue;
                
            }
            t+=s[i];
        }
        return v;
    }
};
