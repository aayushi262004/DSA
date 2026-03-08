class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        priority_queue<int>pq(stones.begin(),stones.end());

        while(pq.size()>1){
            int b1=pq.top();
            pq.pop();
            int b2=pq.top();
            pq.pop();
            if(b1==b2){
                pq.push(0);
            }else{
                pq.push(abs(b2-b1));
            }
        }
    return pq.top();
    }
};