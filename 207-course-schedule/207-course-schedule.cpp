class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {
        vector<vector<int>> adj(numCourses);
        for(int i = 0; i < prerequisites.size(); i++)
        {
            int u = prerequisites[i][0];
            int v = prerequisites[i][1];
            adj[u].push_back(v);
        }
        
        vector<bool> visited(numCourses, false);
        vector<bool> stack(numCourses, false);
        
        for(int i = 0; i < numCourses; i++)
        {
            if(!visited[i] && isCyclic(i, visited, stack, adj))
                return false;
        }
        
        return true;
    }
    
    bool isCyclic(int src, vector<bool>& visited, vector<bool>& stack, vector<vector<int>>& adj)
    {
        stack[src] = true;
        
        if(!visited[src])
        {
            visited[src] = true;
            
            for(auto it : adj[src])
            {
                if(!visited[it] && isCyclic(it, visited, stack, adj))
                    return true;
                
                if(stack[it])
                    return true;
            }
        }
        
        stack[src] = false;
        
        return false;
    }
};