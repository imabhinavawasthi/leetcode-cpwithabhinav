// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
int MaxGold(vector<vector<int>>&matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==-1)continue;
            else{
                int mx=-1;
                if(j>0)mx=max(mx,matrix[i-1][j-1]);
                if(j<m-1)mx=max(mx,matrix[i-1][j+1]);
                mx=max(mx,matrix[i-1][j]);
                if(mx==-1){
                    matrix[i][j]=-1;
                }
                else{
                    matrix[i][j]+=mx;
                }
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans=max(ans,matrix[i][j]);
        }
    }
    return ans;
}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int m, n;
		cin >> m >> n;
		vector<vector<int>>matrix(m, vector<int>(n, 0));
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++)
				cin >> matrix[i][j];
		}
		Solution obj;
		int ans = obj.MaxGold(matrix);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends