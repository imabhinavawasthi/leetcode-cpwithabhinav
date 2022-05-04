class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        map<int,int>m;
        int c=0;
        for(int i=nums.size()-1;i>=0;i--){
            m[nums[i]]++;
        }
        for(int i=nums.size()-1;i>=0;i--){
            m[nums[i]]--;
            if(nums[i]<=k){
                int x=k-nums[i];
                if(m[x]>0){
                    m[x]--;
                    c++;
                }
            }
        }
        return c;
    }
};