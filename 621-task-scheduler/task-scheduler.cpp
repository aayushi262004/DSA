class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>vec(26,0);
        int time=0;
        for(auto c:tasks){
            vec[c-'A']++;
        }
        priority_queue<int>pq;
        for(int val: vec){
            if(val>0)
            pq.push(val);
        }
        
        while(!pq.empty()){
            vector<int>temp;
        for(int i=1;i<=n+1;i++){
            if(!pq.empty()){
            int freq=pq.top();
            pq.pop();
            freq--;
            temp.push_back(freq);
            } 
        }
        for(int &f:temp){
            if(f>0)
            pq.push(f);
        }

        if(pq.empty()){
            time+=temp.size();
        }else{
            time+=n+1;
        }
        }
return time;
    }
};