// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Complete this function
    int rec(int n){
        if(n<=2)return 1;
        return rec(n-1)+rec(n-2);
    }
    int fibonacci(int n)
    {
        //Your code here
        return rec(n);
    }
};

// { Driver Code Starts.
int main() {
	int T;
	
	//taking total testcases
	cin>>T;
	while (T--)
	{
	    int n;
	    //taking number n
	    cin>>n;
	    Solution ob;
	    //calling fibonacci() function
	    cout<<ob.fibonacci(n)<<endl;
	    
	    
	}
	return 0;
}  // } Driver Code Ends