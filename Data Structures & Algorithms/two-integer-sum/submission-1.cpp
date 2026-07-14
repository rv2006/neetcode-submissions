class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            int k=target-nums.at(i);
            for(int j=i;j<nums.size();j++)
            {
                if(nums.at(j)==k && j!=i)
                {
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
            
        }
        return v;  
    }
};
