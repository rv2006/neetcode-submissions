class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        int k=0;
        for(int i=0;i<strs.size();i++)
        {
            string t=strs[i];
            if(t.length()<s.length())
            {
                k=0;
                for(int j=0;j<s.length();j++)
                {
                    if(s[j]==t[k] && k<t.length())
                    {
                        k++;
                    }
                    else
                    {
                        s.erase(j);
                    }
                }
            }
            for(int j=0;j<t.length();j++)
            {
                if(t[j]==s[k])
                {
                    k++;
                }
                else
                {
                    s.erase(k);
                    break;
                }
            }
            k=0;
        }
        return s;

    }
};