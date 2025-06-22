class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>vec;
        for(int i=0;i<s.size();i+=k){
            string str="";
            for(int j=i;j<i+k;j++){
                if(j<s.size())  str+=s[j];
                 else   str+=fill;
            }
                vec.push_back(str);
        }
    return vec;
    }
};