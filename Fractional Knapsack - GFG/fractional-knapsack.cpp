// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        vector<pair<double,int>>f;
        for(int i=0;i<n;i++){
            double w=arr[i].weight;
            double v=arr[i].value;
            double frac=v/w;
            f.push_back({frac,i});
        }
        sort(f.begin(),f.end());
        int i=n-1;
        double ans=0;
        while(W>0&&i>=0){
            double curr_w=arr[f[i].second].weight;
            double curr_v=arr[f[i].second].value;
            if(curr_w<=W){
                ans+=curr_v;
                W-=curr_w;
                i--;
            }
            else{
                double f_val=(double)W/curr_w*curr_v;
                W=0;
                ans+=f_val;
            }
        }
        return ans;
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends