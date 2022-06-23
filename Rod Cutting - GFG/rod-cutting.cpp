// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int f(int price[],int index,int n,vector<vector<int>>&dp){
        //base
        if(index==0){
            return n*price[0];
        }
        if(dp[index][n]!=-1)return dp[index][n];
        
        int nottake=f(price,index-1,n,dp);
        int take=INT_MIN;
        int l=index+1;
        if(l<=n){
            take=price[index]+f(price,index,n-l,dp);
        }
        return dp[index][n]=max(take,nottake);
        
    }
    int cutRod(int price[], int n) {
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return f(price,n-1,n,dp);
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