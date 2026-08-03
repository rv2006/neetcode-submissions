class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;
        int a=word1.length(),b=word2.length();
        int l=min(a,b);
        for(int i=0;i<l;i++)
        {
            s+=word1[i];
            s+=word2[i];

        }
        if(a>b)word1.erase(0,b);
        else{
            word2.erase(0,a);
        }
        s+=a>b?word1:word2;
        return s;
    }
};