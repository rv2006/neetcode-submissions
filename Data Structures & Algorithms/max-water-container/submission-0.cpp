class Solution {
public:
    int maxArea(vector<int>& height) {
        int m=-100;
        int l=0,h=height.size()-1;
        while(l<h)
        {
            int area=min(height[l],height[h])*(h-l);
            m=max(area,m);
            if(height[l]<height[h])
            {
                l++;
            }
            else
            {
                h--;
            }
        }
        return m;
    }
};