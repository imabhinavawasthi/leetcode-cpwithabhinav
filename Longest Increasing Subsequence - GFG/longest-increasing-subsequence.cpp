// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    
    int longestSubsequence(int n, int a[])
    {
        vector<int>dp(n);
        for(int i=0;i<n;i++){
            dp[i]=1;
            int mn=0;
            for(int j=0;j<i;j++){
                if(a[j]<a[i]){
                    mn=max(mn,dp[j]);
                }
            }
            dp[i]+=mn;
        }
        int mn=1;
        for(int i=0;i<n;i++){
            mn=max(mn,dp[i]);
        }
        return mn;
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