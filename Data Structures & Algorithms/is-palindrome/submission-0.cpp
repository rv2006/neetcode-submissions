class Solution {
public:
    bool isPalindrome(string s) {
        if(s=="")return true;
        for (char &c : s)
         {
            c = tolower(c);
        }
        string k;
        for (char c : s)
        {
            if(isalnum(c))
            {
                k+=c;
            }
        }
        int l=0,h=k.length()-1;
        while(l<h)
        {
            if(!(k[l++]==k[h--]))return false;
        }
        return true;
    }
};