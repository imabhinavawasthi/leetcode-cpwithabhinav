class Solution {
public:
    bool dfs(vector<vector<int>>&pre,vector<bool>&visi,vector<bool>& proc,int val){
        if(proc[val])
            return false;
        if(visi[val])
            return true;
        
        visi[val]=true;
        
        for(int j=0;j<pre[val].size();j++){
            if(dfs(pre,visi,proc,pre[val][j]))
                return true;
        }
        visi[val]=false;
        return false;
    }
    
    bool cycleDetect(vector<vector<int>>&pre,vector<bool>&visi,int V){
        vector<bool> proc(V,false);
        for(int i=0;i<V;i++){       
            if(dfs(pre,visi,proc,i))
                return true;
            proc[i]=true;
        }
        return false;
    }
    
    
    void toposort(vector<vector<int>> &temp,int val,stack<int>&st,vector<bool>&visited){
        for(int i=0;i<temp[val].size();i++){
            if(!visited[temp[val][i]])
                toposort(temp,temp[val][i],st,visited);
        }
        visited[val]=true;
        st.push(val);
    }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<bool> visited(numCourses,false);
        vector<vector<int>> temp(numCourses);
        vector<int> ans;
        for(int i=0;i<prerequisites.size();i++){
            temp[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        
        //if the course are related in cyclic then there will be no sequence of course picking as they all depened on each other.
        if(cycleDetect(temp,visited,numCourses))
            return ans;
        
        
        // Here we use topological sort as it give most independent course first and so on........
        stack<int> st;
        for(int i=0;i<numCourses;i++){
            if(!visited[i]){
                toposort(temp,i,st,visited);
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};