class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<score.size();i++){
            pq.push({score[i],i});
        }
        vector<string>vec(score.size());
        int rank=1;
        while(!pq.empty()){
            int index = pq.top().second;
            if(rank==1){
                vec[index]="Gold Medal";
                pq.pop();
            }
             else if(rank==2){
                vec[index]="Silver Medal";
                pq.pop();
            }
             else if(rank==3){
                vec[index]="Bronze Medal";
                pq.pop();
            }else{
                 vec[index]=to_string(rank); 
                 pq.pop();
            }
            rank++;
        }
    return vec;
    }
};