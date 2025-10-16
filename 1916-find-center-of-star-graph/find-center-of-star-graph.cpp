class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
       unordered_map<int,int>degree;
       for(vector<int>edge:edges){
        degree[edge[0]]++;
        degree[edge[1]]++;
       }
       for(auto it:degree){
        int node= it.first;
        int size=it.second;

        if(size == edges.size()){
            return node;
        }
       }
    return -1;
    }
};