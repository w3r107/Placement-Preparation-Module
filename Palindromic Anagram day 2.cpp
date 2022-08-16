bool solve(string s) {
    int n=s.size();
    int c[26]={0};
    for(int i=0;i<n;i++){
        c[s[i]-'a']++;
    }
   int o=0;
    for(int i=0;i<26;i++){
     if(c[i]&1)
     o++;
     if(o>1)
     return false;
    }
    return true;
}