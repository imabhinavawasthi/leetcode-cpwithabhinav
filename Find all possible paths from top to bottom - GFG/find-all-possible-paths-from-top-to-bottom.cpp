// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<vector<int>> ans;
    void back(int i,int j, int n, int m, vector<vector<int>> &grid,vector<int>path){
        if(i==n-1&&j==m-1){
            path.push_back(grid[i][j]);
            ans.push_back(path);
            return;
        }
        else if(i==n-1){
            path.push_back(grid[i][j]);
            back(i,j+1,n,m,grid,path);
        }
        else if(j==m-1){
            path.push_back(grid[i][j]);
            back(i+1,j,n,m,grid,path);
        }
        else{
            path.push_back(grid[i][j]);
            back(i+1,j,n,m,grid,path);
            back(i,j+1,n,m,grid,path);
            
        }
    }
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        vector<int>path;
        back(0,0,n,m,grid,path);
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution ob;
        auto ans = ob.findAllPossiblePaths(n, m, grid);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
  // } Driver Code Ends