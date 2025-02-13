class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n=words.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int word_size=words[i].size();
                 if(words[j].size()>=word_size){
                    if(words[j].substr(0,word_size)==words[i] && words[j].substr(words[j].size()-word_size)==words[i])     
                    count++;
                  }
            }
        }
        return count;
    }
};