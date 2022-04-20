// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	long double maximumProfit(int N, long long C, vector<long long> w, vector<long long> p){
	    long double ans=0;
	    vector<pair<long double,long long>>arr;
	    for(int i=0;i<N;i++){
	        long long x=sqrt(w[i]);
	        x*=x;
	        if(x!=w[i])
	        arr.push_back(make_pair(((long double)p[i]/(long double)w[i]),(long long)w[i]));
	    }
	    sort(arr.begin(),arr.end());
	    for(int i=0;i<arr.size();i++)
	   // cout<<arr[i].first<<" "<<arr[i].second<<"\n";
	    for(int i=arr.size()-1;i>=0;i--){
	        if(C==0)break;
	        long long xx=min(C,arr[i].second);
	        C-=xx;
	        ans+=arr[i].first*xx;
	       // cout<<arr[i].first<<" "<<xx<<" "<<i<<"\n";
	    }
	    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		long long C;
		cin >> n >> C;
		vector<long long > w(n), p(n);
		for(int i = 0; i < n; i++){
		    cin >> w[i] >> p[i];
		}
		Solution ob;
		long double ans = ob.maximumProfit(n, C, w, p);
		cout << fixed << setprecision(3) << ans << "\n";
	}  
	return 0;
}  // } Driver Code Ends