// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
 
class Solution
{
    public:
    int check(int num,int arr[],int N){
        int c=0;
        for(int i=0;i<N;i++){
            if((num&arr[i])==num)c++;
        }
        return c;
    }
    // Function for finding maximum AND value.
    int maxAND (int arr[], int N)
    {
        // Your code here
        int ans=0;
        for(int i=16;i>=0;i--){
            int x=ans|(1<<i);
            int c=check(x,arr,N);
            if(c>=2)ans=x;
        }
        return ans;
    }
};

// { Driver Code Starts.
 
// Driver function
int main()
{
    int t;
    cin>>t;//testcases
    while(t--)
    {
        int n;
        cin>>n;//input n
        int arr[n+5],i;
        
        //inserting elements
        for(i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        //calling maxAND() function
        cout <<  obj.maxAND(arr,n)<<endl;
    }
    return 0;
}  // } Driver Code Ends