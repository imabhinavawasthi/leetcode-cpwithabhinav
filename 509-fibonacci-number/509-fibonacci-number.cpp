class Solution {
public:
    int fib(int n) {
        vector<int>v;
        v.push_back(0);
        v.push_back(1);
        while(v.size()<=n)
        {
            int l=v.size();
            v.push_back(v[l-1]+v[l-2]);
        }
        return v[n];
    }
};