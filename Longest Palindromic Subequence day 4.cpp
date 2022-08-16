int lcs(string s,string r)
{
    int n=s.size(),m=r.size();
    int t[n+1][m+1];
    for(int i=0;i<=n;i++) t[i][0]=0;
    for(int i=0;i<=m;i++) t[0][i]=0;
    for(int i=1;i<=n;i++) 
    {
        for(int j=1;j<=m;j++)
        {
            if(s[i-1]==r[j-1]) t[i][j]=1+t[i-1][j-1];
            else t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }
    return t[n][m];
}
int solve(string s) {
    string r=s;
    reverse(r.begin(),r.end());
    return lcs(s,r);
}