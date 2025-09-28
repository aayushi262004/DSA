class Solution {
public:
    string majorityFrequencyGroup(string s) {
       int n=s.size();
       vector<int>vec(26,0);
       for(int i=0;i<n;i++){
        vec[s[i]-'a']++;
       }
       vector<vector<int>>grp(n+1);
       for(int i=0;i<26;i++){
        grp[vec[i]].push_back(i);
       }
       int j=-1, mx=0;
       for(int i=1;i<=n;i++){
        if(grp[i].size()>=mx){
            mx=grp[i].size();
            j=i;
        }
       }
       string ans;
       for(auto c:grp[j]){
        ans+= 'a'+c;
       }
       return ans;
    }
};