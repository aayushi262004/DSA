class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        string num;
        int count=0;
        for(int i=low;i<=high;i++){
            num=to_string(i);
            int len=num.size();
            if(len%2!=0){
                continue;}
                else{
                    int val1=0,val2=0;
                    int sum1=0,sum2=0;
            for(int j=0;j<len/2;j++){
                val1=num[j]-'0';
                sum1+=val1;
            }
            for(int k=len/2;k<len;k++){
                val2=num[k]-'0';
                sum2+=val2;
            }
         if(sum1==sum2)  count++;
        }
       
        }
    return count; 
    }
};