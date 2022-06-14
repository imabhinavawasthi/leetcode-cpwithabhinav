// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int A[], int n, int k)
	{
	    // Your code here
        vector<long long>pre(n+1);
        pre[0]=0;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+A[i];
        }
        for(int i=0;i<=n;i++){
            pre[i]=((pre[i]%k)+k)%k;
        }
        int ans=0;
        for(int i=0;i<=n;i++){
            int x=pre[i];
            if(mp.find(x)!=mp.end()){
                ans=max(ans,i-mp[x]);
            }
            else{
                mp[x]=i;
            }
        }
        return ans;
	}
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}
  // } Driver Code Ends