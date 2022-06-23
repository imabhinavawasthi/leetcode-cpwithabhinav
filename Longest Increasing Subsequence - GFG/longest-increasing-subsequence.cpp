// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
        int dp[n+1];
        for(int i=0;i<=n;i++)dp[i]=INT_MAX;
        dp[0]=INT_MIN;
        for(int i=0;i<n;i++){
            int index=upper_bound(dp,dp+n+1,a[i])-dp;
            if(a[i]>dp[index-1]&&a[i]<dp[index]){
                dp[index]=a[i];
            }
        }
        for(int i=n;i>=0;i--){
            if(dp[i]!=INT_MAX){
                return i;
            }
        }
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends