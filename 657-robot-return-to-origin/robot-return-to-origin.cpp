class Solution {
public:
    bool judgeCircle(string s) {
       int x=0;
       int y=0;
       for(int i=0;i<s.size();i++){
        if(s[i]== 'U'){
            y+=1;
        }else if (s[i]== 'D'){
            y-=1;
        }else if(s[i]== 'L'){
            x-=1;
        }else{
            x+=1;
        }
       }
    if(x==0 && y==0)    return true;
    return false; 
    }
};