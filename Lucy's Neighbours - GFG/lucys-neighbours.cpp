// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    vector<int> Kclosest(vector<int>arr, int n, int x, int k) 
    { 
        // Your code goes here 
        sort(arr.begin(),arr.end());
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<k;i++){
            pq.push({abs(arr[i]-x),i});
        }
        for(int i=k;i<n;i++){
            int dist=abs(arr[i]-x);
            if(dist>pq.top().first)
            continue;
            if(dist==pq.top().first){
                if(arr[i]>arr[pq.top().second])
                continue;
            }
            pq.pop();
            pq.push({dist,i});
        }
        vector<int>v;
        while(!pq.empty()){
            int i=pq.top().second;
            v.push_back(arr[i]);
            pq.pop();
        }
        sort(v.begin(),v.end());
        return v;
    }  
};

// { Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,k;
		cin>>n>>x>>k; 
		vector <int> array(n);
		for (int i = 0; i < n; ++i)
			cin>>array[i];
        
        Solution obj;
		vector <int> result = obj.Kclosest(array, n, x, k); 
		for (int i = 0; i < result.size(); ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}

	return 0; 
} 



  // } Driver Code Ends