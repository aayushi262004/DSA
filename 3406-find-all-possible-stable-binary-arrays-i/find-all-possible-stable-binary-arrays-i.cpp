class Solution {
public:
    int M=1e9+7;
    int t[201][201][2];
    int solve(int zero, int one , bool starting_with_one, int limit){
        if(one==0 && zero==0)   return 1;
        int result=0;
        if(t[zero][one][starting_with_one]!=-1){
            return t[zero][one][starting_with_one];
        }
        if(starting_with_one==true){
            for(int i=1;i<=min(zero,limit);i++){
                result=(result+solve(zero-i,one,false,limit))%M;
            }
        }else{
            for(int i=1;i<=min(one,limit);i++){
                result=(result+solve(zero,one-i,true,limit))%M;
            }
        }
    return  t[zero][one][starting_with_one]=result;
    }
    int numberOfStableArrays(int zero, int one, int limit) {
        memset(t,-1,sizeof(t));
        int starting_with_one=solve(zero,one,true,limit);
        int starting_with_zero=solve(zero,one,false,limit);
        return(starting_with_one+starting_with_zero)%M;
    }
};