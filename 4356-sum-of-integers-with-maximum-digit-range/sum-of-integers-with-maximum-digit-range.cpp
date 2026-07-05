class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int maxi = 0;
        vector<pair<int,int>> v;   // {number, digitRange}

        for (int num : nums) {
            if (num == 0) {
                v.push_back({0, 0});
                maxi = max(maxi, 0);
                continue;
            }

            int x = num;
            int mx = 0;
            int mn = 9;

            while (x > 0) {
                int digit = x % 10;
                mx = max(mx, digit);
                mn = min(mn, digit);
                x /= 10;
            }

            int diff = mx - mn;
            v.push_back({num, diff});
            maxi = max(maxi, diff);
        }

        int ans = 0;
        for (auto &p : v) {
            if (p.second == maxi)
                ans += p.first;
        }

        return ans;
    }
};