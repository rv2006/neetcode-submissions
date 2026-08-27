class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=0;
        sort(people.begin(),people.end());
        int l=0,h=people.size()-1;
        while(l<h)
        {
            int sum=people[l]+people[h];
            if(sum>limit)
            {
                h--;
                n++;
            }
            else if(sum<=limit)
            {
                l++;
                h--;
                n++;
            }
        }
        if(l==h && people[l]<=limit)n++;
        return n;
    }
};