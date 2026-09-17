class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int l=nums[0],h=0;
        for(int i=0;i<nums.size();i++)
        {
            l=max(l,nums[i]);
            h+=nums[i];
        }
        int mid=0;
        while(l<=h)
        {
            mid=(l+h)/2;
            int s=0,j=1;
            for(int i=0;i<nums.size();i++)
            {
                if(s+nums[i]>mid)
                {
                    s=0;
                    j++;
                }
                s+=nums[i];
            }
            if(j<=k)
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