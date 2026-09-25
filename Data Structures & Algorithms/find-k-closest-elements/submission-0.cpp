class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int start=0;
        vector<int> v;
        for(int i=0;i<k;i++)
        {
            v.push_back(arr[i]);
        }
        for(int i=k;i<arr.size();i++)
        {
            if(abs(arr[i]-x)<abs(arr[start]-x))
            {
                v.erase(v.begin());
                v.push_back(arr[i]);
                start++;
            }
            else if(abs(arr[i]-x)==abs(arr[start]-x) && arr[i]<=arr[start])
            {
                v.erase(v.begin()+1);
                v.push_back(arr[i]);
                start++;
            }          
        }
        return v;
    }
};