class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for (int i = left; i <= right; i++) {
            int num=i;
            int cnt = 0;
            while (num > 0) {
                if ((num & 1) == 1) {
                    cnt++;
                }
                num >>= 1;
            }
            int prime = 0;
            for (int i = 1; i*i <= cnt; i++) {
                if ((cnt % i) == 0) {
                    prime++;

                    if ((cnt/ i) != i)
                        prime++;
                }
            }
        
        if (prime == 2) {
            ans++;
        }
        }
        return ans;
    }
};