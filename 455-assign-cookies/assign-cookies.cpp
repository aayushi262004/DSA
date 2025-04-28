class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
       sort(g.begin(),g.end());
       sort(s.begin(),s.end());
       int cnt=0;
       int i=0;
       while(i<s.size() && cnt<g.size()){
            if(g[cnt]<=s[i]){
                cnt++;
            }
        i++;
       }
return cnt;
    }
};