class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum=0;
        int c=0;
        long long mn=INT_MAX;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]<0){
                    c++;
                    matrix[i][j]*=-1;
                    mn=min(mn,(long long)matrix[i][j]);
                }
                else{
                    mn=min(mn,(long long)matrix[i][j]);
                }
                sum+=matrix[i][j];
            }
        }
        if(c%2==0){
            return sum;
        }
        else{
            sum-=2*mn;
            return sum;
        }
    }
};