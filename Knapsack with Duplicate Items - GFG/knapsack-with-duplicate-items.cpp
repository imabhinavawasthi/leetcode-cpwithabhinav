// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int knapSackRec(int W, int wt[],
                    int val[], int i,
                    int** dp)
    {
        // base condition
        if (i < 0)
            return 0;
        if (dp[i][W] != -1)
            return dp[i][W];  //reduce our tc
     
        if (wt[i] > W) {
     
            // Store the value of function call
            // stack in table before return
            dp[i][W] = knapSackRec(W, wt,
                                   val, i - 1,
                                   dp);
            return dp[i][W];
        }
        else {
            // Store value in a table before return
            dp[i][W] = max(val[i]
                          + knapSackRec(W - wt[i],
                                       wt, val,
                                       i , dp),
                           knapSackRec(W, wt, val,
                                       i - 1, dp));
     
            // Return value of table after storing
            return dp[i][W];
        }
    }
     
    int knapSack(int n, int W, int val[], int wt[])
    {
        // double pointer to declare the
        // table dynamically
        int** dp;
        dp = new int*[n];
     
        // loop to create the table dynamically
        for (int i = 0; i < n; i++)
            dp[i] = new int[W + 1];
     
        // loop to initially filled the
        // table with -1
        for (int i = 0; i < n; i++)
            for (int j = 0; j < W + 1; j++)
                dp[i][j] = -1;
        return knapSackRec(W, wt, val, n - 1, dp);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}  // } Driver Code Ends