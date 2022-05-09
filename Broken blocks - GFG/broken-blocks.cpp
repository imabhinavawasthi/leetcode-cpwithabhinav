// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
public:
int MaxGold(vector<vector<int>>&matrix){
    // Code here
    int n=matrix.size();
    int m=matrix[0].size();
    int mx=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==-1)continue;
            int lastmx=-1;
                if(j>0&&matrix[i-1][j-1]!=-1){
                    lastmx=max(lastmx,matrix[i-1][j-1]);
                }
                if(matrix[i-1][j]!=-1){
                    lastmx=max(lastmx,matrix[i-1][j]);
                }
                if(j<m-1&&matrix[i-1][j+1]!=-1){
                    lastmx=max(lastmx,matrix[i-1][j+1]);
                }
                if(lastmx==-1)matrix[i][j]=-1;
                else
                matrix[i][j]+=lastmx;
        }
    }
    // for(int i=0;i<m;i++){
    //     mx=max(mx,matrix[n-1][i]);
    // }
    
    for(int i=0;i<n;i++){
        int rowmx=-1;
        for(int j=0;j<m;j++){
            rowmx=max(rowmx,matrix[i][j]);
            // cout<<matrix[i][j]<<" ";
        }
        if(rowmx==-1)return mx;
        else mx=max(mx,rowmx);
        // cout<<"\n";
    }
    return mx;
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