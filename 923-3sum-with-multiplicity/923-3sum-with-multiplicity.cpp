class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        unordered_map<int,long>count;
        for(auto &a:arr)count[a]++;
        long long ans=0,t;
        long mod=1e9+7;
        for(int i=0;i<101;i++){
            for(int j=i;j<101;j++){
                int k=target-i-j;
                if(k<j)break;
                if(i==j&&j==k){
                    if(count[i]>2)
                        {t=(count[i]*(count[i]-1)*(count[i]-2))/6;
                    ans+=t;}
                }
                else if(i==j){
                    if(count[i]>1)
                        {t=(count[i]*(count[i]-1)*(count[k]))/2;
                    ans+=t;}
                }
                else if(i==k){
                    if(count[i]>1)
                        {t=(count[i]*(count[k]-1)*(count[j]))/2;
                    ans+=t;}
                }
                else if(k==j){
                    if(count[k]>1)
                       { t=(count[k]*(count[j]-1)*(count[i]))/2;
                    ans+=t;}
                }
                else{
                    {t=(count[i]*count[j]*count[k]);
                    ans+=t;}
                }
                ans%=mod;
                // cout<<i<<" "<<j<<" "<<k<<" "<<ans<<"\n";
            }
        }
        return (int)ans;
    }
};