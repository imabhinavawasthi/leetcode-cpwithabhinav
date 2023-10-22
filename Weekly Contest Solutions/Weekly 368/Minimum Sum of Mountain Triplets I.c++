class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[j]>nums[i]&&nums[k]<nums[j]){
                        int sum=nums[i]+nums[j]+nums[k];
                        ans=min(ans,sum);
                    }
                }
            }
        }
        if(ans==INT_MAX)ans=-1;
        return ans;
    }
};