// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
map<int,int> mp; // mp hold 1 to those number which consists of only 1, 2, 3 as digits only 


 // } Driver Code Ends
//User function template for C++

//Function to find all the numbers with only 1,2 and 3 in their digits.
bool isvalid(int x){
    while(x>0){
            int d=x%10;
            if(d!=1&&d!=2&&d!=3){
                return false;
            }
            x/=10;
        }
        return true;
}
void findAll() {
    //code here
    for(int i=1;i<=1000000;i++){
        if(isvalid(i)){
            mp.insert({i,1});
        }else mp.insert({i,0});
    }
}

// { Driver Code Starts.


int main()
{   
    findAll(); // find all such numbers whose digits are from set {1,2,3} from 1 to 1000000
    int t;
    cin>>t; 
    
    while(t--)
    {
        int n, flag=0;
        cin>>n; 
        
        int arr[n] ;
        
        for(int i=0;i<n;i++) // insert n elements
            cin >> arr[i]; 
        
        sort(arr,arr+n); // sort them
        
        for(int i = 0 ; i < n ; ++ i ) {
            if(mp[arr[i]]) { // if arr[i] is already there in the map then it satisfied else not 
                cout << arr[i] << " " ;
                flag=1;
            }
        }
        
        if(!flag)
            cout << "-1"; 
            
        cout<<endl;
    }
return 0;
}  // } Driver Code Ends