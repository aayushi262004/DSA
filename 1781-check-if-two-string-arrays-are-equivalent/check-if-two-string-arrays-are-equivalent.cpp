class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n=word1.size();
        int m=word2.size();
        string str1="",str2="";
        for(int i=0;i<n;i++){
            for(int j=0;j<word1[i].size();j++){
                str1+=word1[i][j];
            }
        }
         for(int i=0;i<m;i++){
            for(int j=0;j<word2[i].size();j++){
                str2+=word2[i][j];
            }
        }
       
    return str1==str2;

    }
};