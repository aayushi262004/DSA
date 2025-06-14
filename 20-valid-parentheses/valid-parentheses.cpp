class Solution {
public:
    bool isValid(string s) {
       int n=s.size();
       stack<char>stk;
       for(int i=0;i<n;i++){
        if(s[i]=='('){
            stk.push(')');
        }
        else  if(s[i]=='{'){
            stk.push('}');
        }
        else  if(s[i]=='['){
            stk.push(']');
        }else if(stk.empty() || stk.top() != s[i]){
            return false;
        }else{
            stk.pop();
        }
       }
    return stk.empty();
    }
};