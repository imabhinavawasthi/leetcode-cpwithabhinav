// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{   
  public:
    vector<int> farNumber(int N,vector<int> Arr){
        //code here
        vector<int>suffix(N);
        vector<int>ans(N,-1);
        suffix[N-1]=Arr[N-1];
        for(int i=N-2;i>=0;i--){
            suffix[i]=min(suffix[i+1],Arr[i]);
        }
        for(int i=N-2;i>=0;i--){
            int l=i+1;
            int r=N-1;
            while(l<=r){
                int m=(l+r)/2;
                if(suffix[m]<Arr[i]){ans[i]=m;
                l=m+1;}
                else {
                    r=m-1;
                }
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++)
            cin>>Arr[i];
        Solution obj;
        vector<int> answer=obj.farNumber(N,Arr);
        for(auto i:answer)
            cout<<i<<" ";
        cout<<endl;
  }
}  // } Driver Code Ends