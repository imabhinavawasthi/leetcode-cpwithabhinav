class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        // if(k==n*m){
        //     return grid;
        // }
        vector<vector<int>>ans(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int ii=i;
                int jj=j+k;
                if(jj>m-1){
                    ii+=jj/m;jj=jj%m;
                }
                if(ii>n-1)ii=ii%n;
                ans[ii][jj]=grid[i][j];
            }
        }
        return ans;
    }
};