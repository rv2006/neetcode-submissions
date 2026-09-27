class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start=0;
        int sum=0;
        int l=nums.size()+2;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum>=target)
            {
                while(sum-nums[start]>=target)
                {
                    sum-=nums[start++];
                }
                l=min(l,i-start+1);
            }
        }
        if(l==nums.size()+2)return 0;
        return l;
    }
};