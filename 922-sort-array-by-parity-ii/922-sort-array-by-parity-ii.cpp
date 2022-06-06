class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        int even_index=0;
        int odd_index=1;
        while(even_index<n&&odd_index<n){
            if(nums[even_index]%2==0){
                even_index+=2;
            }
            else if(nums[odd_index]%2==1){
                odd_index+=2;
            }
            else{
                swap(nums[odd_index],nums[even_index]);
            }
        }
        return nums;
    }
};