class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            int x=nums[i];
            int y=target-x;
            if(m.find(y)!=m.end()&&m[y]!=i){
                vector<int>ans={i,m[y]};
                return ans;
            }
        }
        vector<int>a;
    return a;
    }
    
};