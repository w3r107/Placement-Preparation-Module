vector<vector<int>> solve(vector<vector<int>>& m) {
    //vector<vector<int>> v;

for(int i=0;i<m.size();i++){
    for(int j=0;j<i;j++){
        swap(m[i][j],m[j][i]);
    }
}
int k;
for(int i=0;i<m.size();i++){
    k=m.size()-1;
    for(int j=0;j<k;j++){
        swap(m[j][i],m[k][i]);
        k--;
    }
}
return m;
}