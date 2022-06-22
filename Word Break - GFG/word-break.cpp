// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
    int wordBreak(string A, vector<string> &B) {
        //code here
        map<string,int>mp;
        for(auto &a:B){
            mp[a]++;
        }
        int n=A.length();
        vector<bool>dp(n);
        for(int i=0;i<n;i++){
            if(dp[i]==false&&mp[A.substr(0,i+1)]>0){
                dp[i]=true;
            }
            if(i==n-1&&dp[i]==true)return true;
            if(dp[i]==true){
                for(int j=i+1;j<n;j++){
                    if(dp[j]==false&&mp[A.substr(i+1,j-i)]>0){
                        dp[j]=true;
                    }
                    if(j==n-1&&dp[j]==true)return true;
                }
            }
        }
        return false;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends