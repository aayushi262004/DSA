class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
      int left = 0;
      int right = 0;
      int cnt =0;
      while(right<s.size() && left<g.size()){
        if(g[left]<= s[right]){
            cnt++;
            left++;
        }
        right++;
      }

     return cnt;  
    }
};