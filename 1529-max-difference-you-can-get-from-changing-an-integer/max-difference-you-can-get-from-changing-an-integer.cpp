class Solution {
public:
    int maxDiff(int num) {
        string str=to_string(num);
        string t=str;
        size_t pos1=str.find_first_not_of('9');
        if(pos1!=string::npos){
            char ch1=str[pos1];
            replace(str.begin(),str.end(),ch1,'9');
        }
        for(int i=0;i<t.size();i++){
            char ch2=t[i];
        if(i==0){
            if(ch2 !='1'){
            replace(t.begin(),t.end(),ch2,'1');
            break;
            }
        }else if(ch2 !='0' && ch2!=t[0]){
                replace(t.begin(),t.end(),ch2,'0');
                break;
            }
        }
    return stoi(str)-stoi(t);
    }
};