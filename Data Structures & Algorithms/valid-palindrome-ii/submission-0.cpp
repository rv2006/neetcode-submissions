class Solution {
public:
    bool isp(string s,int l,int h)
    {
        while(l<h)
        {
            if(s[l++]!=s[h--])return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        string k=s;
        int low=0,high=k.length()-1;
        int f=1;
        while(low<high)
        {
            if(k[low++]!=k[high--])
            {
                if(isp(k,low,high+1))return true;
                else if(isp(k,low-1,high))return true;
                else{return false;}
            }
        }
        return true;
    }
};