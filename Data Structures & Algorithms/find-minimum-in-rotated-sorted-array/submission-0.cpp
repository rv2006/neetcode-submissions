class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,h=nums.size()-1,f=nums[0],mid;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(nums[mid]>=f)
            {
                l=mid+1;
            }
            else if(nums[mid]<f)
            {
                h=mid-1;
            }
        }
        if(l==nums.size())return nums[0];
        return nums[l];
    }
};