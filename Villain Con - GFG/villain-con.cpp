// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int rec(int n, vector<int> adj[], int len[]){
        if(len[n])
            return len[n];
        len[n] = 0;
        for(int u: adj[n])
            len[n] = max(len[n], rec(u, adj, len));
        len[n] += 1;
        return len[n];
    }
    
    int minColour(int N, int M, vector<int> mat[]) {
        vector<int> adj[N+1];
        int len[N+1] = {0};
        int maxVal = -1;
        for(int i = 0;i < M;i++)
            adj[mat[i][0]].push_back(mat[i][1]);
        for(int i = 1;i <= N;i++)
            maxVal = max(maxVal, rec(i, adj, len));
        return maxVal;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M, x, y;
        cin>>N>>M;
        vector<int> mat[M];
        for(int i = 0;i < M;i++){
            cin>>x>>y;
            mat[i].push_back(x);
            mat[i].push_back(y);
        }
        
        Solution ob;
        cout<<ob.minColour(N, M, mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends