class Solution {
public:
    bool iscycle(int i,vector<vector<int>>&adj,vector<bool>&stack,vector<bool>&visited){
        stack[i]=true;
        
        if(!visited[i]){
            visited[i]=true;
            
            for(auto it:adj[i]){
                if(!visited[it]&&iscycle(it,adj,stack,visited)){
                return true;//it contains a cycle
                }
                if(stack[it]==true)
                    return true;
            }
        }
        
        stack[i]=false;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<vector<int>>adj(n);
        for(int i=0;i<pre.size();i++){
            //x->y [x,y]
            int x=pre[i][0];
            int y=pre[i][1];
            adj[x].push_back(y);
        }
        vector<bool>visited(n,false);
        vector<bool>stack(n,false);
        for(int i=0;i<n;i++){
            if(!visited[i]&&iscycle(i,adj,stack,visited)){
                return false;//it contains a cycle
            }
        }
        return true;//dag
    }
};