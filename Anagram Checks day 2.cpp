bool solve(string s0, string s1) {
    vector<int>v(26,0),v1(26,0);
    if(s0.size()!=s1.size()){
        return false;
    }
    for(auto x:s0){
        v[x-'a']++;
    }
    for(auto x:s1){
        v1[x-'a']++;
    }
    for(auto x:s0){
        if(v[x-'a']!=v1[x-'a']){
            return false;
        }
    }
    return true;
}