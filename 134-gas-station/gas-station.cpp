class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0;
        int n=gas.size();
        int total=0;
        int curr=0;
        int gain=0;
        for(int i=0;i<n;i++){
             gain=gas[i]-cost[i];
             total += gain;
             curr+=gain;
            if(curr<0){
                start=i+1;
                curr=0;
            }
        }
    return (total<0)? -1:start;
    }
};