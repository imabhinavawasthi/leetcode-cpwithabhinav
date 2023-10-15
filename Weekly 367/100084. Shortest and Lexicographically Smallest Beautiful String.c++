class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans="";
        int c=0;
        int n=s.length();
        int i=0,j=0;
        while(j<n){
            if(s[j]=='1'){
                c++;
            }
            j++;
            while(c>k||s[i]=='0'){
                if(s[i]=='1'){
                    c--;
                }
                i++;
            }
            if(c==k){
                if(ans==""){
                    ans=s.substr(i,(j-i));
                }
                else{
                    if((j-i)<ans.size()){
                        ans=s.substr(i,(j-i));
                    }
                    else if((j-i)==ans.size()){
                        string s1=s.substr(i,(j-i));
                        if(s1<ans)
                            ans=s1;
                    }
                }
            }
        }
        return ans;
    }
};