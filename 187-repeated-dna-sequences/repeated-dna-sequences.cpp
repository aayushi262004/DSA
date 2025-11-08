class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
       int k=10;
       unordered_map<string,int>seq;
       int n=s.size();
       for(int i=0;i<=n-k;i++){
        string sub= s.substr(i,k);
        seq[sub]++;
       }
    vector<string>res;
    for(auto &ss: seq){
        if(ss.second>1){
            res.push_back(ss.first);
        }
    }
    return res;
    }
};