class Solution {
public:
    bool canFinish(int V, vector<vector<int>>& prerequisites) {
     vector<vector<int>>adjls(V);
     for(auto it:prerequisites){
        adjls[it[1]].push_back(it[0]);
     }  
     vector<int>indegree(V,0);
     for(int i=0;i<V;i++){
        for(auto it:adjls[i]){
            indegree[it]++;
        }
     }
     queue<int>q;

     for(int i=0;i<V;i++){
        if(indegree[i]==0){
            q.push(i);
        }
     } 
     vector<int>topo;
     int cnt=0;
     while(!q.empty()){
        int node=q.front();
        q.pop();
        topo.push_back(node);
        cnt++;
        for(auto it:adjls[node]){
            indegree[it]--;
            if(indegree[it]==0)q.push(it);
        }
     }
    return cnt==V;
    }
};