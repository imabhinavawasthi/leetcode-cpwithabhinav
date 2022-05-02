// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	int pre[2401];
    	memset(pre,0,sizeof(pre));
    	for(int i=0;i<n;i++)pre[arr[i]]++;
    	for(int i=0;i<n;i++)pre[dep[i]+1]--;
    	for(int i=1;i<2401;i++)pre[i]+=pre[i-1];
    	int mn=0;
    	for(int i=0;i<2401;i++)mn=max(mn,pre[i]);
    	return mn;
    }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends