// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  //n amout required
  //m ->index
    
    long long int count_rec(int S[], int m, int n,vector<vector<long long int>>&dp) {
        //base cases
        if(n==0)
        {
            return dp[m][n]=1;
        }
        if(m==0){
            return dp[m][n]=0;
        }
        //already computed
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        if(S[m-1]<=n){
            //take
            return dp[m][n]=count_rec(S,m,n-S[m-1],dp)+count_rec(S,m-1,n,dp);
        }
        //nottake
        return dp[m][n]=count_rec(S,m-1,n,dp);
    }
    long long int count(int S[], int m, int n) {

        // code here.
        vector<vector< long long int>>dp(m+1,vector< long long int>(n+1,-1));
        return count_rec(S,m,n,dp);
    }  //O(2^n)
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends