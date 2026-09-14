class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l=0;
        int h=0;
        for(int i=0;i<weights.size();i++)
        {
            l=max(weights[i],l);
            h+=weights[i];
        }
        if(days==1)return h;
        int mid;
        while(l<=h)
        {
            int d=1,t=0;
            mid=(l+h)/2;
            for(int i=0;i<weights.size();i++)
            {
                if(t+weights[i]>mid)
                {
                    d++;
                    t=0;
                }
                t+=weights[i];
            }
            cout<<d<<" "<<mid<<endl;
            
            if(d<=days)
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
            
        }
        return l;
    }
};