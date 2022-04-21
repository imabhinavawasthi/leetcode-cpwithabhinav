// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        int nextgap(int gap){
            if(gap<=1)return 0;
    gap=(gap/2)+(gap%2);
    return gap;}
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            
    int i,j,gap=n+m;
    for(int g=nextgap(gap);g>0;g=nextgap(g))
    {
        for(int i=0;i<n+m;i++){
            int j=i+g;
            if(j>=n+m){
                break;
            }
            if(i<n&&j<n){
                if(arr1[i]>arr1[j])swap(arr1[i],arr1[j]);
            }
            else if(i<n&&j>=n){
                if(arr1[i]>arr2[j-n])swap(arr1[i],arr2[j-n]);
            }
            else{
                if(arr2[i-n]>arr2[j-n])swap(arr2[i-n],arr2[j-n]);
            }
            
        }
        }
}
};

// { Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 
  // } Driver Code Ends