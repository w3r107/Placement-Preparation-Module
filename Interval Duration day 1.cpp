int solve(vector<vector<int>>& in) {
    vector<vector<int>> m;
    if(in.size()==0)
    return 0;
    int c=0,d=0;
    sort(in.begin(),in.end());
    vector<int> t=in[0];
    for(auto x:in){
        if(x[0]<=t[1]){
            t[1]=max(x[1],t[1]);
        }
        else{
            m.push_back(t);
            t=x;
        }
    }
    m.push_back(t);

    for(auto x: m){
        c+=(x[1]-x[0])+1;
       //d+=x[0];
    }

    return c;
}