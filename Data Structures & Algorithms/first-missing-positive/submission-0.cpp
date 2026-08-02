class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int k=1;
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        while(true)
        {
            if(s.count(k))
            {
                k++;
            }
            else{
                break;
            }
        }
        return k;
    }
};