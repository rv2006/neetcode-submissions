#include<algorithm>
#include<iostream>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        string sub="";
        int ml=0,st=0;
        for(int i=0;i<s.length();i++)
        {
            auto p=find(sub.begin(),sub.end(),s[i]);
            if(p==sub.end())
            {
                sub+=s[i];
            }
            else
            {
                st+=p-sub.begin()+1;
                sub=s.substr(st,i-st+1);
            }
            if(ml<sub.length())
            ml=sub.length();
        }
        return ml;
    }
};