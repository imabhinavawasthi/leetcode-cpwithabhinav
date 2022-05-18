// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to count paths between two vertices in a directed graph.
    void countPathsUtil(vector<int> *adj, int u, int d, vector<bool> &visited,
                        int &pathCount) {
        // marking the current vertex as visited.
        visited[u] = true;

        // if current node is equal to destination node, we increase the count.
        if (u == d)
            pathCount++;
        else {
            vector<int>::iterator i;
            // traversing over the adjacent vertices.
            for (i = adj[u].begin(); i != adj[u].end(); ++i)

                // if any vertex is not visited, we call the function
                // recursively for adjacent node.
                if (!visited[*i])
                    countPathsUtil(adj, *i, d, visited, pathCount);
        }
        // marking the current vertex as not visited.
        visited[u] = false;
    }

    // Function to count paths between two vertices in a directed graph.
    int countPaths(int V, vector<int> adj[], int source, int destination) {
        // using boolean array to mark visited nodes and currently
        // marking all the nodes as false.
        vector<bool> visited(V + 1, false);

        int pathCount = 0;

        // calling the function to count paths
        countPathsUtil(adj, source, destination, visited, pathCount);
        return pathCount;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // adj[v].push_back(u);
        }
        int source, destination;
        cin >> source >> destination;
        Solution obj;
        cout << obj.countPaths(V, adj, source, destination) << endl;
    }
    return 0;
}  // } Driver Code Ends