class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mpp;
        vector<pair<int,int>>v;
        for(auto &a:nums){
            mpp[a]++;
        }
        for(auto &a:mpp){
            v.push_back({a.second,a.first});
        }
        sort(v.begin(),v.end());
        vector<int>vv;
        for(int i=0;i<k;i++){
            vv.push_back(v[v.size()-1-i].second);
        }
        return vv;
    }
};