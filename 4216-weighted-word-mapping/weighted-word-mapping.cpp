class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
       int n=words.size();
        string str="";
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<words[i].size();j++){
                sum+=weights[words[i][j]-'a'];
            }
            int val=sum%26;
            int idx=26-val-1;
            char ch='a'+idx;
            str+=ch;
        }
    return str;
    }
};