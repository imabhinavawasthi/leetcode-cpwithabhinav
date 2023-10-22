class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>leftmin(n,0);
        vector<int>rightmin(n,0);
        int mn=nums[0];
        for(int i=1;i<n;i++){
            leftmin[i]=mn;
            mn=min(mn,nums[i]);
        }
        mn=nums[n-1];
        for(int i=n-2;i>=0;i--){
            rightmin[i]=mn;
            mn=min(mn,nums[i]);
        }
        int ans=INT_MAX;
        for(int j=1;j<n-1;j++){
            int i=leftmin[j];
            int k=rightmin[j];
            if(i<nums[j]&&k<nums[j]){
                int sum=i+k+nums[j];
                ans=min(ans,sum);
            }
        }
        if(ans==INT_MAX)ans=-1;
        return ans;
    }
};