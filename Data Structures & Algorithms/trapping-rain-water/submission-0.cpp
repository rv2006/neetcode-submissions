class Solution {
public:
    int trap(vector<int>& height) {
        int n=0,s=0;
        int lmx[height.size()],hmx[height.size()];
        for(int i=0;i<height.size();i++)
        {
            lmx[i]=s;
            s=max(height[i],s);
        }
        s=0;
        for(int i=height.size()-1;i>=0;i--)
        {
            hmx[i]=s;
            s=max(height[i],s);
        }
        for(int i=0;i<height.size();i++)
        {
            int k=0;
            if(lmx[i]<height[i])lmx[i]=0;
            if(hmx[i]<height[i])hmx[i]=0;
            k=min(lmx[i],hmx[i]);
            if(k!=0)k-=height[i];
            n+=k;
        }

        return n;
    }
};