class Solution {
public:
    string reverseWords(string s) {
       int n=s.size();
       string str="";
       stack<string>stk;
       for(int i=0;i<n;i++){
        if(s[i]==' '){
            if(str!="")
            stk.push(str);
            str="";
        }else{
            str+=s[i];
        }
       }
       if(str!=""){
        stk.push(str);
       }
       string res="";
       while(!stk.empty()){
            res+=stk.top();
            res+=" ";
            stk.pop(); 
       } 
       res.pop_back();
       return res;

    }
};