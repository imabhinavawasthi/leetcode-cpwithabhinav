class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int dp[n][m];
        dp[0][0]=grid[0][0];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(i==1&&j==1)continue;
                else if(i==1){
                    dp[i-1][j-1]=dp[i-1][j-2]+grid[i-1][j-1];
                }
                else if(j==1){
                    dp[i-1][j-1]=dp[i-2][j-1]+grid[i-1][j-1];
                }
                else{
                    dp[i-1][j-1]=min(dp[i-1][j-2],dp[i-2][j-1])+grid[i-1][j-1];
                }
            }
        }
        return dp[n-1][m-1];
    }
};