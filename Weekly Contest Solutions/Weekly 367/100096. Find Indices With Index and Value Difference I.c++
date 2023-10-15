class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if((j-i)>=indexDifference&&(abs(nums[i] - nums[j]))>=valueDifference){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
};