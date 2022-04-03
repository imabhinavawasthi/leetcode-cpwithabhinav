class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int in=0;
        int n=nums.size();
        for(int i=n-1;i>=1;i--){
            if(nums[i-1]<nums[i]){
                in=i;
                break;
            }
        }
        sort(nums.begin()+in,nums.end());
        // cout<<in;
        if(in==0)return;
        for(int i=in;i<n;i++){
            if(nums[i]>nums[in-1]){
                swap(nums[in-1],nums[i]);
                return;
            }
        }
    }
};