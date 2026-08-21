class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> a;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int x=nums[i];
            int l=i+1;
            int h=nums.size()-1;
            if( i!=0 && nums[i]==nums[i-1] )continue;
            
            while(l<h)
            {
                int s=nums[l]+nums[h]+x;
                if(s==0)
                {
                    vector<int> b;
                    b.push_back(x);
                    b.push_back(nums[l]);
                    b.push_back(nums[h]);
                    a.push_back(b);
                    l++;
                    h--;
                    while(l < h && nums[l] == nums[l-1]) l++;
                    while(l < h && nums[h] == nums[h+1]) h--;
                }
                else if(s>0)
                {
                    h--;
                }
                else if(s<0)
                {
                    l++;
                }
            }
        }
        return a;

    }
};