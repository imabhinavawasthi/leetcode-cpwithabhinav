class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans;
        for(auto &ch:nums){
            if(ch%2==0)ans.push_back(ch);
        }
        for(auto &ch:nums){
            if(ch%2==1)ans.push_back(ch);
        }
        return ans;
    }
};