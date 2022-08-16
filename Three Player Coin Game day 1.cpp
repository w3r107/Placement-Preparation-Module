int solve(vector<int>& in) {
    sort(in.rbegin(),in.rend());
    int s=0,i=0,j=in.size()-1;
    while(i<j){
        s+=in[i+1];
        j=j-1;
        i+=2;
    }
    return s;
}