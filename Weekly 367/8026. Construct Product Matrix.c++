class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int mod=12345;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>ans(n,vector<int>(m));
        long rowup[n];
        long rowdown[n];
        rowup[0]=1;
        for(int i=1;i<n;i++){
            long p=1;
            for(int j=0;j<m;j++){
                p=(p%mod*grid[i-1][j]%mod)%mod;
            }
            rowup[i]=(rowup[i-1]%mod*p%mod)%mod;
        }
        rowdown[n-1]=1;
        for(int i=n-2;i>=0;i--){
            long p=1;
            for(int j=0;j<m;j++){
                p=(p%mod*grid[i+1][j]%mod)%mod;
            }
            rowdown[i]=(rowdown[i+1]%mod*p%mod)%mod;
        }
        long colleft[n][m];
        for(int i=0;i<n;i++)colleft[i][0]=1;
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                colleft[i][j]=(colleft[i][j-1]%mod*grid[i][j-1]%mod)%mod;
            }
        }
        long colright[n][m];
        for(int i=0;i<n;i++)colright[i][m-1]=1;
        for(int i=0;i<n;i++){
            for(int j=m-2;j>=0;j--){
                colright[i][j]=(colright[i][j+1]%mod*grid[i][j+1]%mod)%mod;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                long p=1;
                p=(p%mod*rowup[i]%mod)%mod;
                p=(p%mod*rowdown[i]%mod)%mod;
                p=(p%mod*colleft[i][j]%mod)%mod;
                p=(p%mod*colright[i][j]%mod)%mod;
                ans[i][j]=p;
            }
        }
        return ans;
    }
    
};