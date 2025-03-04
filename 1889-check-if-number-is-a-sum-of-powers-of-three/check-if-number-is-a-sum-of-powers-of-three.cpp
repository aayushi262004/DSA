//approach-2
//TC:log₃(n);
//SC:O(1)
class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n){
            if(n%3==2)  return false;
            n/=3;
        }
        return true;
    }
};

//approach-1
//TC:O(cnt)+O(cnt)+O(cnt)=O(3cnt)= O(cnt);
//SC:O(cnt);
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
