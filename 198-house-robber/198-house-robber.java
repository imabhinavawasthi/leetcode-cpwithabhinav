class Solution {
    public int rob(int[] nums) {
        int n=nums.length;
        int[] dp=new int[n];
        dp[0]=nums[0];
        if(n==1)return nums[0];
        dp[1]=Math.max(nums[1],nums[0]);
        if(n<3){
            return dp[n-1];
        }
        for(int i=2;i<n;i++){
            int x=dp[i-1];
            int y=dp[i-2]+nums[i];
            dp[i]=Math.max(x,y);
        }
        return dp[n-1];
    }
}