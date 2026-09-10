class FreqStack {
public:
    vector<int> v;
    map<int,int> m;
    
    void push(int val) {

        v.push_back(val);
        m[val]++;
    }
    
    int pop() {
        int me=0,mf=0;
        for(auto x:m)
        {
            if(mf<x.second)
            {
                mf=x.second;
            }
        }
            

        for(int i = v.size() - 1; i >= 0; i--)
        {
            if(m[v[i]]== mf)
            {
                me = v[i];
                v.erase(v.begin() + i);
                m[me]--;
                break;
            }
        }
        return me;

    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */