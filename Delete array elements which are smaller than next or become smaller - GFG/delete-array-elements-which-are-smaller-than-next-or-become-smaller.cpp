// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<int> deleteElement(int arr[],int n,int k);

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        vector<int> v;
        
        v = deleteElement(arr,n,k);
        vector<int>::iterator it;
         for(it=v.begin();it!=v.end();it++)
            cout<<*it<<" ";
        cout<<endl;
        
    }
return 0;
}
// } Driver Code Ends


vector<int> deleteElement(int arr[],int n,int k)
{
    // Create a stack and push arr[0]
    stack<int> s;
    s.push(arr[0]);
 
    int count = 0;
     
    // traversing a loop from i = 1 to n
    for (int i=1; i<n; i++) {
         
        // condition for deleting an element
        while (!s.empty() && s.top() < arr[i]
                            && count < k) {                                    
            s.pop();
            count++;
        }
         
        s.push(arr[i]);
    }
     
    // Putting elements of stack in a vector
    // from end to begin.
    int m = s.size();
    vector<int> v(m); // Size of vector is m
    while (!s.empty()) {
         
        // push element from stack to vector v
        v[--m] = s.top();
        s.pop();
    }
    return v;
    
}
