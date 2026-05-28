class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n =  answerKey.size();
        int res =0;
        int left =0;
        int right =0;
        int countF = 0;
        while(right<n){
            if(answerKey[right] == 'F'){
                countF++;
            }
            while(countF > k){
                if(answerKey[left] == 'F'){
                    countF--;
                }
                left++;
            }
            res= max(res, right-left+1);
            right++;
        }
        left =0;
        right = 0;
        int countT =0;
        for(int right =0;right<n;right++){
            if(answerKey[right] == 'T'){
                countT++;
            }
            while(countT> k){
                if(answerKey[left] == 'T'){
                    countT--;
                }
                left++;
            }
            res = max(res, right-left+1);
        }
return res;
    }
};