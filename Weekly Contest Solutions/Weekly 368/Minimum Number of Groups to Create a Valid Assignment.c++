class Solution 
{
public:
    int minGroupsForValidAssignment(vector<int>& nums) 
    {
        map<int, int> mp;
        vector<int> v;
        for(auto it : nums)
            mp[it] ++;
        for(auto it : mp)
        {
            v.push_back(it.second);
        }
        sort(v.begin(), v.end());
        int ans = INT_MAX;
        // first element is max it can be
        for(int i = 1; i <= v[0]; i++)
        {
            int a = i, b = i+1;
            int num = 0;
            bool bad = false;
            for(int i = 0; i < v.size(); i ++)
            {
                int cur = v[i];
                int mn = INT_MAX, cnt = 0;
                while(cur >= 0)
                {
                    if(cur % a == 0) mn = cnt+cur/a;
                    cur -= b;
                    cnt ++;
                }
                if(mn == INT_MAX)
                {
                    bad = true;
                    break;
                }
                num += mn;
            }
            if(!bad)
                ans = min(ans, num);
        }
        return ans;
    }
};