class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string res;
        stack<string>stk;
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                res+=s[i];
            }else{
                if(!res.empty()){
                stk.push(res);
                res="";
                }
            }
        }
        if(!res.empty())    stk.push(res);
        string final;
       while(!stk.empty()){
        final+=stk.top();
        stk.pop();
        if (!stk.empty()) final += " "; 
       }

        return final;


    }
};