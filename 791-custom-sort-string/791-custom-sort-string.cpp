class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>mpp;
        for(auto &a:s)mpp[a]++;
        string snew="";
        for(auto &a:order)
        {
            for(int i=0;i<mpp[a];i++)
            {
                snew+=a;
            }
            mpp[a]=0;
        }
        for(auto &a:s)
        {
            if(mpp[a])snew+=a;
        }
        return snew;
    }
};