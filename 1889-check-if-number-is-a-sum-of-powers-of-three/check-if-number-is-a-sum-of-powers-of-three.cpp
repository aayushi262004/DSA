class Solution {
    int powcount(int &n){
         int i=0;
         int cnt=0;
        while(pow(3,i)<=n){
            cnt++;
            i++; 
        }
    
         return cnt;
         
    }
public:
    bool checkPowersOfThree(int n) {
        int cntt=powcount(n);
       stack<int>stk;
      
       for(int i=0;i<cntt;i++){
        int num=pow(3,i);
       stk.push(num);
      
    }
    while(!stk.empty()){

        if(stk.top()<n){
            n=n-stk.top();
            stk.pop();
    
    }
    else if(stk.top()>n)
        stk.pop();
    else return true;
    

    }

        return n==0? true: false;
    }
};