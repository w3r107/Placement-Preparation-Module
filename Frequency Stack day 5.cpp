class FrequencyStack {
    public:
    map<int,stack<int>>mp1;
    map<int,int> mp;
    int m=0;
    FrequencyStack() {
       
    }

    void append(int val) {
        mp[val]++;
        m=max(m,mp[val]);
        mp1[mp[val]].push(val);
    }

    int pop() {
       int t=mp1[m].top();
       mp1[m].pop();
     mp[t]--;
     if(mp1[m].size()==0)
     m--;

     return t;
    }
};