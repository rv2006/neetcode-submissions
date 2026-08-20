class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,h=numbers.size()-1;
        vector<int> a;
        while(l<h)
        {
            if(numbers[l]+numbers[h]>target)
            {
                h--;
            }
            else if(numbers[l]+numbers[h]<target)
            {
                l++;
            }
            else if(numbers[l]+numbers[h]==target){
                a.push_back(l+1);
                a.push_back(h+1);
                return a;
            }
        }
        return a;
    }
};