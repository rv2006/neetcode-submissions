class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> s;
        vector<string> c=strs;
        for(int i=0;i<strs.size();i++)
        {
            sort(strs[i].begin(),strs[i].end());
        }
        map<string,vector<string>> m;
        for(int i=0;i<strs.size();i++)
        {
            m[strs[i]].push_back(c[i]);
        }
        for(auto x:m)
        {
            s.push_back(x.second);
        }
        return s;
    }
};
