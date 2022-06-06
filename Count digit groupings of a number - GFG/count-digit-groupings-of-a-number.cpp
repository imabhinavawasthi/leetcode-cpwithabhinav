// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	 
	// A memoization table to store results of subprobllems
	// length of string is 40 and maximum sum will
	// be 9*40 = 360.
	int dp[101][901];
	 
	// Function to find the count of splits with given condition
	int countGroups(int position, int previous_sum, int length,
	                string num)
	{
	    /* Terminating Condition */
	    if (position == length)
	        return 1;
	 
	    /* If already evaluated for a given sub problem then
	      return the value */
	    if (dp[position][previous_sum] != -1)
	        return dp[position][previous_sum];
	 
	    // countGroups for current sub-group is 0
	    dp[position][previous_sum] = 0;
	 
	    int res = 0;
	    int sum = 0; // sum of digits
	 
	    // Traverse all digits from current position to rest
	    // of the length of string
	    for (int i = position; i < length; i++)
	    {
	        sum += (num[i] - '0');
	 
	        // If forward_sum is greater than the previous sum,
	        // then call the method again
	        if (sum >= previous_sum)
	 
	           // Note : We pass current sum as previous sum
	           res += countGroups(i + 1, sum, length, num);
	    }
	 
	    dp[position][previous_sum] = res;
	 
	    // total number of subgroups till current position
	    return res;
	}
	int TotalCount(string str){
		int n = str.size();
		
		memset(dp, -1, sizeof(dp));
		
		return countGroups(0,0,n,str);
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution ob;
		int ans = ob.TotalCount(str);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends