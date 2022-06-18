class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        priority_queue<int>pq;
        int n=gas.size();
        if(n==1){
            if(gas[0]>=cost[0])return 0;
            else return -1;
        }
        for(int i=0;i<n;i++){
            if(gas[i]>cost[i])pq.push(i);
        }
        while(!pq.empty()){
            int t=pq.top();
            pq.pop();
            int c=0;
            int gastank=0;
            int i=t;
            while(true){
                if(c==n)return t;
                int gaspresent=gas[i];
                int gasreq=cost[i];
                gastank+=gaspresent;
                gastank-=gasreq;
                if(gastank<0){
                    break;
                }
                c++;
                // i++;
                // if(i==n)i=0;
                i=(i+1)%n;
            }
        }
        return -1;
    }
};