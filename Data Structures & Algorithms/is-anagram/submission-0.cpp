class Solution {
public:
    bool isAnagram(string s, string t) {
        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<t.length();j++)
            {
                if(s[i]==t[j])
                {
                    t.erase(j,1);
                    s.erase(i,1);
                    i--;
                    j--;                    
                    break;
                }
            }
        }
        if(s.empty() && t.empty())return true;
        else
        {
            return false;
        }
    }
};
