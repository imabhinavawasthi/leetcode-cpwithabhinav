class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int>v(32,0);
        int c=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int in=0;
            long x=nums[i];
            if(nums[i]<0){c++;x*=-1;}
            
            while(x){
                if(x%2==1)v[in]++;
                in++;
                x/=2;
            }
        }
        long ans=0;
        for(int i=0;i<32;i++){
            if(v[i]%3!=0){
                ans+=pow(2,i);
            }
        }
        if(c%3!=0)ans*=-1;
        return (int)ans;
    }
};