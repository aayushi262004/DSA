class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(int &c:piles){
            pq.push(c);
        }
        while(!pq.empty() && k>0){
            int rval=pq.top();
            int val=floor(pq.top()/2);
            rval-=val;
            pq.pop();
            if(rval>0){
                pq.push(rval);
            }
            k--;
        }
        int sum=0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
    return sum;
    }
};