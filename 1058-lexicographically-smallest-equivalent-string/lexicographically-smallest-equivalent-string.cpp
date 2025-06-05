class Solution {
public:
    char DFS_minval(unordered_map<char,vector<char>>&mpp,char ch , vector<int>&visited){
        visited[ch-'a']=1;
        char minChar=ch;
        for(char &c: mpp[ch]){
            if(visited[c-'a']==0){
                minChar = min(minChar,DFS_minval(mpp,c,visited));
            }
        }
return minChar;
    }

    string smallestEquivalentString(string s1, string s2, string baseStr) {
        int n=s1.size();
        int m=baseStr.size();
        unordered_map<char,vector<char>>mpp;
        for(int i=0;i<n;i++){
            char u= s1[i];
            char v= s2[i];
            mpp[u].push_back(v);
            mpp[v].push_back(u);
        }
        string res;
        for(int i=0;i<m;i++){
            char ch =baseStr[i];
            vector<int>visited(26,0);
            char minChar = DFS_minval(mpp,ch,visited);
            res.push_back(minChar);
        }
    return res;
    }
};