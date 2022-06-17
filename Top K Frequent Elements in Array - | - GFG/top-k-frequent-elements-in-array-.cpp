// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    struct comp{
            bool operator()(pair<int,int>a,pair<int,int>b){
            if(a.second==b.second){
                return (a.first<b.first);
            }
            return (a.second<b.second);
        }
    };
    vector<int> topK(vector<int>& arr, int k) {
        // Code here
        unordered_map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        vector<int>v;
        priority_queue<pair<int,int>,vector<pair<int,int>>,comp>pq(mp.begin(),mp.end());
        for(int i=0;i<k;i++){
            v.push_back(pq.top().first);
            pq.pop();        
        }
        return v;
    }
};


// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends