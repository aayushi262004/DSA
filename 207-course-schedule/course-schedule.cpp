class Solution {
public:
    bool canFinish(int V, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adjls(V);
        for(auto it:prerequisites){
            adjls[it[0]].push_back(it[1]);
        }
        vector<int>indegree(V,0);
        for(int i=0;i<V;i++){
            for(auto it:adjls[i]){
            indegree[it]++;
            }
        }
        queue<int>q;
        int cnt=0;
        vector<int>topo;
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
            while(!q.empty()){
                    int val=q.front();
                    q.pop();
                    cnt++;
                    for(auto it:adjls[val]){
                        indegree[it]--;
                    
                    if(indegree[it]==0){
                        q.push(it);
                    }
                }
                }
            
        return cnt==V;
    }
};