class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int>pq;
        for(int c:amount){
            if(c>0)
            pq.push(c);
        }
        int cnt=0;
        while(!pq.empty()){
            int x=pq.top();
            pq.pop();
            if(pq.empty()){
                cnt+=x;
                break;
            }
            int y=pq.top();
            pq.pop();
            x--;y--;
            if(x>0)
            pq.push(x);
            if(y>0)
            pq.push(y);
            cnt++;
            
        }
    return cnt;
    }
};