// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        map<int,int>mp;
        for(int i=0;i<n;i++)mp[a[i]]++;
        for(int i=0;i<m;i++)mp[b[i]]++;
        
        return mp.size();
        // map<int,int>m1,m2;  //intersection
        // for(int i=0;i<n;i++)m1[a[i]]++;
        // for(int i=0;i<m;i++)m2[b[i]]++;
        // //x
        // if(m1.find(x)!=m1.end()&&m2.find(x)!=m2.end()){
        //     cout<<x;
        // }
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends