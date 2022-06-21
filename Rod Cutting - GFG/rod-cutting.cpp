// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cutRod(int val[], int n) {
        int W=n;
        int dp[W+1];
        memset(dp, 0, sizeof dp);
        
        // Fill dp[] using above recursive formula
        for (int i=0; i<=W; i++)
          for (int j=0; j<n; j++)
             if ((j+1) <= i)
                dp[i] = max(dp[i], dp[i-j-1] + val[j]);
     
        return dp[W];
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends