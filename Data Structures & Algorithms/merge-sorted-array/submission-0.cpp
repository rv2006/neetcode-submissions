class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> n3;
        int i=m-1,j=n-1,k=-1;
        while(i>=0 && j>=0)
        {
            if(nums1[i]<nums2[j])//if num2 big
            {
                nums1[i+j+1]=nums2[j];
                j--;
            }
            else // if num1 big
            {
                nums1[i+j+1]=nums1[i];
                i--;
                
            }
        }
        if(m==0)nums1=nums2;
        while(j>=0)
        {
            nums1[i+j+1]=nums2[j];
            j--;
        }
    }
};