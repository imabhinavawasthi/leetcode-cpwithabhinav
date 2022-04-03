class Solution {
public:
    bool ispal(string s){
        string sn=s;
        reverse(sn.begin(),sn.end());
        return (sn==s);
    }
    bool validPalindrome(string s) {
        string sn="";
        if(ispal(s))return true;
        for(int i=0;i<s.length()/2;i++){
            if(s[i]!=s[s.length()-i-1]){
                for(int j=0;j<s.length();j++){
                    if(i==j)continue;
                    else sn+=s[j];
                }
                if(ispal(sn))return true;
                sn="";
                for(int j=0;j<s.length();j++){
                    if(j==(s.length()-i-1))continue;
                    else sn+=s[j];
                }
                if(ispal(sn))return true;
                return false;
            }
        }
        return false;
    }
};