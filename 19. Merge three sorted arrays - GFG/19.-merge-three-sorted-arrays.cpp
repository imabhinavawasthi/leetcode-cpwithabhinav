// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 


void printVector(const vector<int>& a) 
{ 
    for (auto e : a) { 
        cout << e << " "; 
    }
    cout<<endl;
} 

 // } Driver Code Ends
class Solution{
  public:
    // A, B, and C: input sorted arrays
    //Function to merge three sorted vectors or arrays 
    //into a single vector or array.
    vector<int> mergeThree(vector<int>& A, vector<int>& B, vector<int>& C) 
    { 
        //Your code here
        int n=A.size();
        int m=B.size();
        int p=C.size();
        int i=0,j=0,k=0;
        vector<int>ans;
        while(i<n||j<m||k<p){
            int a=INT_MAX;
            int b=INT_MAX;
            int c=INT_MAX;
            if(i<n)a=A[i];
            if(j<m)b=B[j];
            if(k<p)c=C[k];
            
            // Cheking if 'a' is the minimum
            if (a <= b && a <= c) {
                ans.push_back(a);
                i++;
            }
            // Cheking if 'b' is the minimum
            else if (b <= a && b <= c) {
                ans.push_back(b);
                j++;
            }
            // Cheking if 'c' is the minimum
            else {
                if (c <= a && c <= b) {
                    ans.push_back(c);
                    k++;
                }
            }
        }
        return ans;
    } 

};

// { Driver Code Starts.

int main() 
{ 


    int t;
    cin>>t;
    while(t--){
    int n,m,o;
    cin>>n>>m>>o;
    vector<int> A,B,C;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        B.push_back(x);
    }
    
    for(int i=0;i<o;i++){
        int x;
        cin>>x;
        C.push_back(x);
    }

    Solution obj;
    vector<int>ans = obj.mergeThree(A, B, C);
    for(auto i: ans)cout << i << " ";
    cout << "\n";
    // obj.printVector(mergeThree(A, B, C)); 
    
    }
   
    return 0; 
} 
  // } Driver Code Ends