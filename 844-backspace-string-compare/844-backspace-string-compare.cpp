class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string sf="",tf="";
        int n=s.length();
        int c=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='#')c++;
            else{
                if(c){
                    c--; continue;
                }
                else sf+=s[i];
            }
        }
        n=t.length();
        c=0;
        for(int i=n-1;i>=0;i--){
            if(t[i]=='#')c++;
            else{
                if(c){
                    c--; continue;
                }
                else tf+=t[i];
            }
        }
        return (tf==sf);
    }
};