class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> a;
        a=nums;
        for(int i=0;i<nums.size();i++)
        {
            a.push_back(nums.at(i));
        }
        return a;
    }
};