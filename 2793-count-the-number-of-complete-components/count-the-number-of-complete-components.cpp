class Solution {
    void dfs(int curr,int &nodes, int &edges, vector<vector<int>>&adj_list, vector<bool>&visit){
        nodes++;
        visit[curr]=true;
        for(int &nbr:adj_list[curr]){
            edges++;
            if(!visit[nbr]) dfs(nbr,nodes,edges,adj_list,visit);
        }
    }
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
            vector<vector<int>>adj_list(n);
            for(auto edge:edges){
                adj_list[edge[0]].push_back(edge[1]);
                adj_list[edge[1]].push_back(edge[0]);
            }
            int ans=0;
            vector<bool>visit(n,false);
            for(int i=0;i<n;i++){
                if(!visit[i]){
                    int nodes=0;
                    int edges=0;
                    dfs(i,nodes,edges,adj_list,visit);
                if(edges==nodes*(nodes-1))  ans++;
                }
            }
        return ans;
    }
};