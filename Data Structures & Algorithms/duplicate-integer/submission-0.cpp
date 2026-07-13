class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums.at(i-1)==nums.at(i))return true;
        }
        return false;
    }
};