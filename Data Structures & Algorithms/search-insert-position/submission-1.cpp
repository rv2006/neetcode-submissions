class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        int mid;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(target==nums[mid])return mid;
            else if(target>nums[mid])l=mid+1;
            else
            {
                h=mid-1;
            }
        }
        return l;
    }
};