class Solution {
public:
    int calPoints(vector<string>& ops) {
        int c=0;
        vector<int>v;
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=="C")v.pop_back();
            else if(ops[i]=="D")v.push_back(v[v.size()-1]*2);
            else if(ops[i]=="+")v.push_back(v[v.size()-1]+v[v.size()-2]);
            else {
                
                int x=stoi(ops[i]);
                    v.push_back(x);}
        }
        for(auto &a:v)c+=a;
        return c;
    }
};