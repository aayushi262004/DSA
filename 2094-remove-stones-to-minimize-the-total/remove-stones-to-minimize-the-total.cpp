class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int sum=0;
        priority_queue<int>pq;
        for(int &c:piles){
            pq.push(c);
            sum+=c;
        }
        while(!pq.empty() && k>0){
            int rval=pq.top();
            int val=floor(pq.top()/2);
            rval-=val;
            pq.pop();
            sum-=val;
            if(rval>0){
                pq.push(rval);
            }
            k--;
        }
       
    return sum;
    }
};