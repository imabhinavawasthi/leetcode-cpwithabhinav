// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        int dp[W + 1];
        memset(dp, 0, sizeof(dp));
     
        for (int i = 1; i < n + 1; i++) {
            for (int w = W; w >= 0; w--) {
     
                if (wt[i - 1] <= w)
                    // finding the maximum value
                    dp[w] = max(dp[w] , dp[w - wt[i - 1]] + val[i - 1]);
            }
        }
        return dp[W]; // returning the maximum value of knapsack
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends