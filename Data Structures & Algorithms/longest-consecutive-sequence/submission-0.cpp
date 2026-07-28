class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int l=0;
        for(auto it:s)
        {
            if(!s.count(it-1))
            {
                int c=1;
                int x=it;
                while(s.count(x+1))
                {
                    c++;
                    x++;
                }
                l=max(l,c);
            }
            
        }
        return l;
    }
};