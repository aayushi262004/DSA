class Solution {
public:
    bool dfs(int node, vector<vector<int>>&adjls,vector<int>&vis, int dest){
        if(node==dest)return true;
        vis[node]=1;
        for(auto it:adjls[node]){
            if(!vis[it]){
                if(dfs(it,adjls,vis,dest))
                return true;
            }
        }
   
    return false;   
    }
    

    bool validPath(int n, vector<vector<int>>& edges, int src, int dest) {
        vector<vector<int>>adjls(n);
        for(auto it:edges){
            adjls[it[0]].push_back(it[1]);
            adjls[it[1]].push_back(it[0]);
        }
        vector<int>vis(n,0);
        return dfs(src,adjls,vis,dest);
    }
};