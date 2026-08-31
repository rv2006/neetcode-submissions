class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum=0;
        stack<int> a;
        for(int i=0;i<operations.size();i++)
        {
            
            if(operations[i]=="+")
            {
                int s=a.top();
                a.pop();
                int b=a.top();
                int t=s+b;
                a.push(s);
                a.push(t);
            }
            else if(operations[i]=="D")
            {
                int t=2*a.top();
                a.push(t);
            }
            else if(operations[i]=="C")
            {
                a.pop();
            }
            else{
                int t=stoi(operations[i]);
                a.push(t);
            }
        }
        while(!a.empty())
        {
            cout<<a.top()<<endl;
            sum+=a.top();
            a.pop();
        }
        return sum;
    }
};