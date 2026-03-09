class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int greed=0;
        int idx=0;
        int cnt=0;
        while(idx<s.size() && greed<g.size()){
            if(s[idx]>=g[greed]){
                cnt++;
                idx++;
                greed++;
            }else{
                idx++;
            }
        }
    return cnt;
        
    }
};