class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        int mid=0,f=0;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(nums[0]<=nums[mid])
            {
                l=mid+1;
            }
            else if(nums[0]>nums[mid])
            {
                h=mid-1;
            }
            
        }
        if(l==nums.size())l=0;
        int n=l;
        h=nums.size()-1;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        h=n;
        l=0;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return -1;
    }
};