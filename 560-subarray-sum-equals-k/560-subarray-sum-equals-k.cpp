class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int n=nums.size();
        int c=0;
        if(n==1)return nums[0]==k;
        map<int,int>m;
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        for(int i=0;i<n;i++){
            if(nums[i]==k)c++;
            int x=nums[i]-k;
            if(m[x])c+=m[x];
            m[nums[i]]++;
        }
        return c;
    }
};