class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int cnt_five,cnt_ten,cnt_twenty;
        cnt_five=cnt_ten=cnt_twenty=0;
        for(int i=0;i<n;i++){
            if(bills[i]==5){
                cnt_five++;
            }else if(bills[i]==10){
                cnt_ten++;
                if(cnt_five>0){
                cnt_five--;
                }else{
                    return false;
                }
            }else if(bills[i]==20){
                cnt_twenty++;
                if(cnt_ten>0 && cnt_five>0){
                    cnt_ten--;
                    cnt_five--;
                }else if(cnt_ten<=0 && cnt_five>=3){
                    cnt_five-=3;
                }else{
                    return false;
                }
            }
        }
    return true;
    }
};