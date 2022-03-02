class Solution {
public:
    string convert(string s, int n) {
        if(n==1)return s;
        else
        {
            vector<string>vs(n,"");
            int in=0;
            bool ok=true;
            for(int i=0;i<s.length();i++)
            {
                vs[in]+=s[i];
                if(ok)
                in++;
                else in--;
                if(in==n){
                    ok=false;
                    in=n-2;
                }
                else if(in==-1)
                {
                    ok=true;
                    in=1;
                }
            }
            string snew="";
            for(auto &a:vs)snew+=a;
            return snew;
        }
    }
};