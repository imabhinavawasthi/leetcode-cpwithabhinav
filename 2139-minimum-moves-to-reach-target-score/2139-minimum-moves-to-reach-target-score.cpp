class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int c=0;
        while(target>1&&maxDoubles>0)
        {
            if(target%2==1){c++;target--;}
            maxDoubles--;c++;target/=2;
        }
        
        c+=(target-1);
        return c;
    }
};