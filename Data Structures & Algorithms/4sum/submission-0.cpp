class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> a;
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0 && nums[i]==nums[i-1])continue;
            for(int j=i+1;j<nums.size();j++)
            {
                int l=j+1;
                int h=nums.size()-1;
                if( j!=i+1 && nums[j]==nums[j-1] )continue;                
                    long long s=(long long)(nums[i])+nums[j];
                    while(l<h)
                    {
                        long long sum=(long long)(nums[l])+nums[h]+s;
                        if(sum==target && j!=i && l!=i && h!=i && j!=l && j!=h )
                        {
                            vector<int> b;
                            b.push_back(nums[i]);
                            b.push_back(nums[j]);
                            b.push_back(nums[l]);
                            b.push_back(nums[h]);
                            a.push_back(b);
                            l++;
                            h--;
                            while(l<h && nums[l]==nums[l-1])l++;
                            while(l<h && nums[h+1]==nums[h])h--;
                            
                        }
                        else if(sum<target)
                        {
                            l++;
                        }
                        else if(sum>target)
                        {
                            h--;
                        }
                    }
                
            }
        }
        return a;
    }
};