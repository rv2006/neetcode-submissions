class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<int> s;
        for(auto it:m)
        {
            if(it.second>nums.size()/3)
            {
                s.push_back(it.first);
            }
        }
        return s;
    }
};