class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0;
        int cnt =0;
        for(char c:s){
            if(c == '('){
                open++;
            }else{
                if(open>0){
                    open--;
                }else{
                    cnt++;
                }
            }
        }
    return cnt+open;
    }
};