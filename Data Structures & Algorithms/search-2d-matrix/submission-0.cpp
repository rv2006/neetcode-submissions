class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int l=0,h=(r*c)-1;
        int mid;
        while(l<=h)
        {
            mid=(l+h)/2;
            int m=mid%c;
            int m2=mid/c;
            if(m2>=r || m>=c)return false;
            int temp=matrix[m2][m];
            if(temp==target)return true;
            else if(temp>target)
            {
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return false;
    }
};