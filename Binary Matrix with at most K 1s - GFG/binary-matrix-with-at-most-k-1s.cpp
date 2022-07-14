// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> largestSquare(vector<vector<int>> matrix, int R, int C, int K, int Q, int q_i[], int q_j[]) {
    int countDP[R][C]; 
        memset(countDP, 0, sizeof(countDP)); 
      
        // Precomputation of the countDP 
        // prefix sum of the matrix 
        countDP[0][0] = matrix[0][0]; 
        for (int i = 1; i < R; i++) 
            countDP[i][0] = countDP[i - 1][0] + 
                                 matrix[i][0]; 
        for (int j = 1; j < C; j++) 
            countDP[0][j] = countDP[0][j - 1] + 
                                 matrix[0][j]; 
        for (int i = 1; i < R; i++) 
            for (int j = 1; j < C; j++) 
                countDP[i][j] = matrix[i][j] + 
                           countDP[i - 1][j] + 
                           countDP[i][j - 1] - 
                       countDP[i - 1][j - 1]; 
        
        vector<int> res;
        
        // Loop to solve each query 
        for (int q = 0; q < Q; q++) { 
            int i = q_i[q]; 
            int j = q_j[q]; 
            int min_dist = min(min(i, j), 
              min(R - i - 1, C - j - 1)); 
            int ans = -1, l = 0, u = min_dist; 
              
            // Binary Search to the side which 
            // have atmost in K 1's in square 
            while (l <= u) { 
                int mid = (l + u) / 2; 
                int x1 = i - mid, x2 = i + mid; 
                int y1 = j - mid, y2 = j + mid; 
                // Count total number of 1s in 
                // the sub square considered 
                int count = countDP[x2][y2]; 
                if (x1 > 0) 
                    count -= countDP[x1 - 1][y2]; 
                if (y1 > 0) 
                    count -= countDP[x2][y1 - 1]; 
                if (x1 > 0 && y1 > 0) 
                    count += countDP[x1 - 1][y1 - 1]; 
                  
                // If the count is less than or 
                // equals to the maximum move 
                // to right half 
                if (count <= K) { 
                    ans = 2 * mid + 1; 
                    l = mid + 1; 
                } 
                else
                    u = mid - 1; 
            } 
            if(ans==-1)
                ans = 0;
            res.push_back(ans);
        } 
        
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R,C,K,Q,x;
        cin>>R>>C;
        vector<vector<int>> M;
        
        for(int a=0; a<R; a++)
        {
            vector<int> temp;
            for(int b=0; b<C; b++)
            {
                cin>>x;
                temp.push_back(x);
            }
            M.push_back(temp);
        }
        
        cin>>K>>Q;
        
        int q_i[Q], q_j[Q];
        
        for(int i=0; i<Q; i++)
            cin>>q_i[i];
        for(int i=0; i<Q; i++)
            cin>>q_j[i];

        Solution ob;
        vector<int> res = ob.largestSquare(M,R,C,K,Q,q_i,q_j);
        
        for(int i=0; i<Q; i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends