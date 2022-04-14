class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>x,y;
        x=nums;
        int n=nums.size();
        if(n==1)return 0;
        for(int i=1;i<n;i++){
            x[i]+=x[i-1];
        }
        y=nums;
        for(int i=n-2;i>=0;i--){
            y[i]+=y[i+1];
        }
        for(int i=0;i<n;i++){
            if(i==0){if(y[1]==0)return 0;}
            else if(i==n-1){if(x[n-2]==0)return n-1;}
            else if(x[i-1]==y[i+1]){return i;}
        }
        return -1;
    }
};