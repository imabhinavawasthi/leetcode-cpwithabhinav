class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int>x,y;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    x.insert(i);
                    y.insert(j);
                }
            }
        }
        for(int i=0;i<n;i++){
            bool ok=false;
            if(x.find(i)!=x.end())ok=true;
            else continue;
            for(int j=0;j<m;j++){
                if(ok)matrix[i][j]=0;
            }
        }
        for(int i=0;i<m;i++){
            bool ok=false;
            if(y.find(i)!=y.end())ok=true;
            else continue;
            for(int j=0;j<n;j++){
                if(ok)matrix[j][i]=0;
            }
        }
    }
};