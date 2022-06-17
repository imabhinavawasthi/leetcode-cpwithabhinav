// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int k){
        // Your code here
        int size=k+1;
        if(size>num)size=k;
        priority_queue<int,vector<int>,greater<int>>pq(arr,arr+size);
        vector<int>v;
        for(int i=size;i<num;i++){
            v.push_back(pq.top());
            pq.pop();
            pq.push(arr[i]);
        }
        while(!pq.empty()){
            v.push_back(pq.top());
            pq.pop();
        }
        return v;
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num, K;
	    cin>>num>>K;
	    
	    int arr[num];
	    for(int i = 0; i<num; ++i){
	        cin>>arr[i];
	    }
	    Solution ob;
	    vector <int> res = ob.nearlySorted(arr, num, K);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	        
	    cout<<endl;
	}
	
	return 0;
}
  // } Driver Code Ends