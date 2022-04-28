// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        long long maxarea=-1;
        stack<long long>s;
        int i=0;
        while(i<n){
            if(s.empty()||arr[s.top()]<=arr[i])
            {
                s.push(i);
                i++;
            }
            else{
                long long tp=s.top();
                s.pop();
                long long area=arr[tp]*(s.empty()?i:(i-s.top()-1));
                maxarea=max(maxarea,area);
                
            }
        }
        while(!s.empty()){
            long long tp=s.top();
                s.pop();
                long long area=arr[tp]*(s.empty()?i:(i-s.top()-1));
                maxarea=max(maxarea,area);
        }
        return maxarea;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends