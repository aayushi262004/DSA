class Solution {
public:
    string makeGood(string s) {
        int n=s.size();
        string str="";
        for(auto val:s){
            if( !str.empty() && abs(str.back()-val)==32){
                str.pop_back();
            }else{
                str.push_back(val);
            }
            
        }
    return str;
    }
};