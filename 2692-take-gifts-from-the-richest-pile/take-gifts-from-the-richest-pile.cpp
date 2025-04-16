class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq;
        for(auto c:gifts)   pq.push(c);
        while(k!=0){
            long long val=0;
            val=floor(sqrt(pq.top()));
            pq.pop();
            pq.push(val);
            k--;
        }
        long long sum=0;
        while(!pq.empty()){
               sum+=pq.top();
               pq.pop();
               }
    return sum;
    }
};