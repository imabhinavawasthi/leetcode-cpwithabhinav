// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:

    // arr[]: input array
    // n: size of array
    // x: element to find index
    //Function to find index of element x in the array if it is present.
    int closer(int arr[],int n, int x)
    {
        //Your code here
        int l=0;
        int r=n-1;
        while(l<=r){
            int m=(l+r);
            if(arr[m]==x)return m;
            else if(arr[m]>x){
                if(m!=n-1)
                if(arr[m+1]==x){
                    return m+1;
                }
                r=m-1;
            }
            else{
                if(m!=0)
                if(arr[m-1]==x)return m-1;
                l=m+1;
            }
        }
        return -1;
    }
};


// { Driver Code Starts.

int main() {
    
    cin.tie(NULL);
    
	int t;
	cin >> t;
	
	while(t--){
	  
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    int x;
	    cin >> x;
	    Solution obj;
	    int res = obj.closer(arr,n,x);
	    
	    cout << res << endl;
	}
	
	return 0;
}  // } Driver Code Ends