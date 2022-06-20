class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i=0;
        for(int j=colors.size()-1;j>0;j--)
        {
            if(colors[j]!=colors[0])
                {i=j;break;}
        }
        if(i==0)return i;    //when all house have same colour
        i=max((int)i,(int)(colors.size()-i-1));
        reverse(colors.begin(),colors.end());
        int ii=0;
        for(int j=colors.size()-1;j>0;j--)
        {
            if(colors[j]!=colors[0])
                {ii=j;break;}
        }
        if(ii==0)return ii;
        ii=max((int)ii,(int)(colors.size()-ii-1));
        return max(i,ii);
    }
};