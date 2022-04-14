class Solution {
public:
    void gameOfLife(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        vector<vector<int>> stt(n,vector<int>(m,0));
        vector<vector<int>> add;
        add=arr;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i>0)add[i][j]+=add[i-1][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(j>0)add[i][j]+=add[i][j-1];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int sti=i-1;
                int stj=j-1;
                int opi=i+1;
                int opj=j+1;
                sti=max(sti,0);
                stj=max(stj,0);
                opi=min(opi,n-1);
                opj=min(opj,m-1);
                int c=0;
                for(int ii=sti;ii<=opi;ii++){
                    for(int jj=stj;jj<=opj;jj++){
                        c+=arr[ii][jj];
                    }
                }
                c-=arr[i][j];
                if(c==3){
                    stt[i][j]=1;
                }
                else if(c<2||c>3){
                    stt[i][j]=0;
                }
                else stt[i][j]=arr[i][j];
            }
        }
        arr=stt;
    }
};