class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        priority_queue<pair<long,pair<int,int>>>pq;
        int n=points.size();
        for(int i=0;i<n;i++){
            pq.push({points[i][0]*points[i][0]+points[i][1]*points[i][1],{points[i][0],points[i][1]}});
            if(pq.size()>k)pq.pop();
        }
        while(!pq.empty()){
            vector<int>t;
            t.push_back(pq.top().second.first);
            t.push_back(pq.top().second.second);
            ans.push_back(t);
            pq.pop();
        }
        return ans;
    }
};