class Solution {
public:
    int minAddToMakeValid(string s) {
       stack<char>stk;
       int cnt=0;
       for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            stk.push(')');
        }else if(s[i]== ')' && !stk.empty()){
            stk.pop();
        }else{
            cnt++;
        }
        }
       cnt+=stk.size();
    return cnt;
    }
};