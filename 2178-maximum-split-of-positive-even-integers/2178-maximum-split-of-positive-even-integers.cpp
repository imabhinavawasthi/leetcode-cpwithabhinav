class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long>v;
        if(finalSum%2==0)
        {
            long long n=2;
            while(finalSum>=n)
            {
                v.push_back(n);
                
                finalSum-=n;
                n+=2;
            }
            if(finalSum!=0)
            {
                v[v.size()-1]+=finalSum;
            }
        }
        return v;
    }
};