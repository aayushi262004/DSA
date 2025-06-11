class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int>charIndexs;
        unordered_map<char,int>charIndext;
        for(int i=0;i<s.length();i++){
            if(charIndexs.find(s[i])==charIndexs.end()){//first appearance of each character
                charIndexs[s[i]]=i;
            }
            if(charIndext.find(t[i])==charIndext.end()){
                charIndext[t[i]]=i;
            }
            if(charIndexs[s[i]] != charIndext[t[i]]){
                return false;
            }
       }
    return true;
    }
};