class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> v;
        for(int i=0;i<position.size();i++)
        {
            v.push_back({position[i],speed[i]});
        }
        sort(v.begin(), v.end(), [](auto a, auto b) {
            return a.first < b.first;
        });
        stack<float> t;
        float f=v.size();
        for(int i=v.size()-1;i>=0;i--)
        {
            float time=float((target-v[i].first))/v[i].second;
            if(t.empty())
            {
                t.push(time);
                continue;
            }
            if(t.top()>=time)
            {
                continue;
            }
            else
            {
                t.push(time);
            }
        }
        return t.size();
    }
};