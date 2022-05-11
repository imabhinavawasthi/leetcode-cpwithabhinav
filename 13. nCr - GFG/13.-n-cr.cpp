// { Driver Code Starts
// A Dynamic Programming based solution to compute nCr % p 
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends



class Solution
{
    public:
    //Function to return nCr mod 10^9+7 for given n and r. 
    int nCrModp(int n, int r) 
    { 
      long mod=1000000007;
      if(r>n)return 0;
      if(n==r||r==0)return 1;
      if((n-r)<r)r=(n-r);
      int dp[r+1];
      
      memset(dp,0,sizeof(dp));
      dp[0]=1;
      for(int i=1;i<=n;i++){
          for(int j=min(r,i);j>0;j--){
              dp[j]=(dp[j]+dp[j-1])%mod;
          }
      }
      return dp[r];
      // your code here
      
    } 
};

// { Driver Code Starts.
// Driver program 
int main() 
{ 
  int t, n, r;
  
  //taking count of testcases
  cin >> t;
  
  while(t--){
      
      //taking n and r
      cin >> n >> r;
      Solution ob;
      //calling method nCrModp()
      cout << ob.nCrModp(n, r) << endl;
  }
  
  return 0; 
}
  // } Driver Code Ends