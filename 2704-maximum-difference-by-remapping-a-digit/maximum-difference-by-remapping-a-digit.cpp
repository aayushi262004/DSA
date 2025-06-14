class Solution {
public:
    int minMaxDifference(int num) {
        string str=to_string(num);
        string t=str;
        size_t pos = str.find_first_not_of('9');
        if(pos != string :: npos){
            char a =str[pos];
            replace(str.begin(),str.end(),a,'9');
        }
    char b=t[0];
    replace(t.begin(),t.end(),b,'0');
    return stoi(str)-stoi(t);
    }
};