class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int n=nums.size();
        if(n==1){
            if(indexDifference==0&&valueDifference==0){
                return {0,0};
            }
            else{
                return {-1,-1};
            }
        }
        int mx[n];
        int mn[n];
        mn[0]=nums[0];
        mx[0]=nums[0];
        for(int i=1;i<n;i++){
            mx[i]=max(mx[i-1],nums[i]);
            mn[i]=min(mn[i-1],nums[i]);
        }
        for(int i=indexDifference;i<n;i++){
            if(abs(mx[i-indexDifference]-nums[i])>=valueDifference){
                int mxi=0;
                int mxv=nums[0];
                for(int j=1;j<=i-indexDifference;j++){
                    if(nums[j]>mxv){
                        mxv=nums[j];
                        mxi=j;
                    }
                }
                return {mxi,i};
            }
            if(abs(mn[i-indexDifference]-nums[i])>=valueDifference){
                int mni=0;
                int mnv=nums[0];
                for(int j=1;j<=i-indexDifference;j++){
                    if(nums[j]<mnv){
                        mnv=nums[j];
                        mni=j;
                    }
                }
                return {mni,i};
            }
        }
        reverse(nums.begin(),nums.end());
        mn[0]=nums[0];
        mx[0]=nums[0];
        for(int i=1;i<n;i++){
            mx[i]=max(mx[i-1],nums[i]);
            mn[i]=min(mn[i-1],nums[i]);
        }
        for(int i=indexDifference;i<n;i++){
            if(abs(mx[i-indexDifference]-nums[i])>=valueDifference){
                int mxi=0;
                int mxv=nums[0];
                for(int j=1;j<=i-indexDifference;j++){
                    if(nums[j]>mxv){
                        mxv=nums[j];
                        mxi=j;
                    }
                }
                return {n-mxi+1,n+1-i};
            }
            if(abs(mn[i-indexDifference]-nums[i])>=valueDifference){
                int mni=0;
                int mnv=nums[0];
                for(int j=1;j<=i-indexDifference;j++){
                    if(nums[j]<mnv){
                        mnv=nums[j];
                        mni=j;
                    }
                }
                return {n+1-mni,n+1-i};
            }
        }
        return {-1,-1};
    }
};