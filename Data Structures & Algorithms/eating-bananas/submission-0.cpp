class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int t) {
        int h=0,l=1;
        
        for(int i=0;i<piles.size();i++)
        {   
            
            h=max(h,piles[i]);
        }
        int mid;
        while(l<=h)
        {
            mid=(l+h)/2;
            long long time=0;
            for(int i=0;i<piles.size();i++)
            {
                time+=((long long)(piles[i]+mid-1))/mid;
            }
            if(time<=(long long)t)
            {
                h=mid-1;
            }
            
            else
            {
                l=mid+1;
            }
            
        }
        return l;
    } //88
};