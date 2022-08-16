class Solution {
public:
    # define MOD 1000000007
    int findPaths(int m, int n, int maxMove, int sr, int sc) {
        vector<vector<int>> dp(m,vector<int>(n,0));
        dp[sr][sc]=1;
        int res=0;
        for(int i=1;i<=maxMove;i++){
            vector<vector<int>> v(m,vector<int>(n,0));
            for(int k=0;k<m;k++){
            for(int j=0;j<n;j++){
                int right=(j+1<n?dp[k][j+1]:0);
                int left=(j-1>=0?dp[k][j-1]:0);
                int up= (k-1>=0?dp[k-1][j]:0);
                int down=(k+1<m?dp[k+1][j]:0);
                
                v[k][j]=(v[k][j]+right)%MOD;
                 v[k][j]=(v[k][j]+left)%MOD;
                 v[k][j]=(v[k][j]+up)%MOD;
                 v[k][j]=(v[k][j]+down)%MOD;
            }
            }
            for(int l=0;l<m;l++){
                res=(res+dp[l][0])%MOD;
                res=(res+dp[l][n-1])%MOD;
            }
            for(int l=0;l<n;l++){
                res=(res+dp[0][l])%MOD;
                res=(res+dp[m-1][l])%MOD;
            }
            swap(dp,v);
        }
        return res;
        
    }
};