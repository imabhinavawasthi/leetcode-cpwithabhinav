class Solution {
public:
    int findMin(vector<int>& nums) {
        vector<pair<int,int>>mpp;
        for(int i=0;i<nums.size();i++){
            mpp.push_back(make_pair(nums[i],i));
        
        }
        sort(mpp.begin(),mpp.end());
            return nums[mpp[0].second];
    }
};