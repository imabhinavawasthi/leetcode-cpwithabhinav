class Solution {
public:
    string reorganizeString(string s) {
        //map
        map<char,int>mp;
        int n=s.size();
        for(int i=0;i<n;i++)mp[s[i]]++;
        priority_queue<pair<int,char>>pq;
        for(auto &it:mp){
            pq.push({it.second,it.first});
        }
        string ans="";
        while(pq.size()>1){
            char firstchar=pq.top().second;
            pq.pop();
            char secondchar=pq.top().second;
            pq.pop();
            ans+=firstchar;
            ans+=secondchar;
            mp[firstchar]--;
            mp[secondchar]--;
            if(mp[firstchar]>0){
                pq.push({mp[firstchar],firstchar});
            }
            if(mp[secondchar]>0){
                pq.push({mp[secondchar],secondchar});
            }
        }
        if(!pq.empty()){
            char lastchar=pq.top().second;
            if(mp[lastchar]>1)
                return "";
            else ans+=lastchar;
        }
        return ans;
    }
};