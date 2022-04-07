class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(),stones.end());
        while(stones.size()>1){
            int x=stones[stones.size()-1]-stones[stones.size()-2];
            stones.pop_back();
            stones.pop_back();
            if(x)stones.push_back(x);
            sort(stones.begin(),stones.end());
        }
        if(stones.size()==0)return 0;
        return stones[0];
    }
};