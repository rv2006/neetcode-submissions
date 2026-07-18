class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int n;
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]>(nums.size()/2))
            {
                n=nums[i];
            }
        }
        return n;
    }
};