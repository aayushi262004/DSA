class Solution {
public:
    bool isPalindrome(int x) {
        long long ans=0;
        int digit=0;
        int dup=x;
        while(dup>0){
        digit = dup%10;
        ans=ans*10+digit;
        dup/=10;
        }
    return x==ans;
        }
};