class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        priority_queue<int>q;
        if(n==1){
            if(gas[0]>=cost[0])return 0;
            else return -1;
        }
        for(int i=0;i<n;i++){
            if(gas[i]>cost[i])q.push(i);
        }
        while(!q.empty()){
            int f=q.top();
            q.pop();
            int c=0;
            int gastank=0;
            int i=f;
            while(true){
                if(c==n){
                    return f;
                }
                int gaspresent=gas[i];
                int gasreq=cost[i];
                gastank+=gaspresent;
                gastank-=gasreq;
                //gas present in our tank
                if(gastank<0)break;
                i=(i+1)%n;
                // if(i==n)i=0;
                c++;
            }
        }
        return -1;
    }
};  