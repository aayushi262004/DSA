class Solution {
public:
    int hammingWeight(int n) {
       int cnt;
        while(n!=0){
             n=n&(n-1);
             cnt++;
        }
        return cnt;
    }
};