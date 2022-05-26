// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int d[100006];
    int f(int i,vector<int>a[],vector<int>&vis)
    {
        if(vis[i])return d[i];
        vis[i]=1;int c=0;
        for(auto child:a[i])
        {
            if(vis[child])
            c=max(c,1+d[child]);
            else
           c=max(c,1+f(child,a,vis));
        }
        d[i]=c;
        return d[i];
    }
    int minColour(int N, int M, vector<int> mat[]) {
        // code here
        vector<int>a[N+1];
        vector<int>vis(N+1,0);
        for(int i=0;i<M;i++){
            int x,y;
            x=mat[i][0];
            y=mat[i][1];
            a[x].push_back(y);
        }
        int ans=0;
        for(int i=1;i<=N;i++){
            ans=max(ans,f(i,a,vis));
        }
        return ans+1;
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