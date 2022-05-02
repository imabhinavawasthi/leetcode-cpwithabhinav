// { Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find repeated element and its frequency.
    pair<int, int> findRepeating(int *arr, int n){
        pair<int, int> p={-1,-1};
        int curr=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]==curr){
                if(p.first==curr){
                    p.second++;
                }
                else {
                    p.first=curr;
                    p.second=2;
                }
            }
            else{
                curr=arr[i];
            }
        }
        return p;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    Solution obj;
	    pair<int, int> ans = obj.findRepeating(arr,n);
	    
	    cout << ans.first << " " << ans.second << endl;
	    
	}
	
}  // } Driver Code Ends