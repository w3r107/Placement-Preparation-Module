vector<vector<int>> solve(vector<vector<int>>& in) {
    vector<vector<int>> m;
    if(in.size()==0)
    return m;
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

    return m;
}