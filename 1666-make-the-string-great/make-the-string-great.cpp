class Solution {
public:
    string makeGood(string s) {
        string str = "";
        for(auto &ch:s){
            if(!str.empty()&&
            (str.back() + 32 == ch || str.back()-32 == ch)){
                str.pop_back();
            }else{
                str.push_back(ch);
            }
        }
        
    return str;
    }
};