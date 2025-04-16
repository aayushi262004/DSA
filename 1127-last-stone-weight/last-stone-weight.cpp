class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        int x,y,val=0;
        int n=stones.size();
        for(auto i:stones){
            pq.push(i);
        }
        while(!pq.empty() && pq.size()!=1){
            x=pq.top();
            pq.pop();
            y=pq.top();
            pq.pop();
            val=x-y;
            if(val>0)
            pq.push(val);
        }
    return pq.empty()? 0:pq.top();
    }
};