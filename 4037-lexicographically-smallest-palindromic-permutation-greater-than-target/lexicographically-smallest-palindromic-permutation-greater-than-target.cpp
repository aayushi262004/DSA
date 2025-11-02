#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void find_ans(string cur, int n, const string &m, multiset<char> pool, const string &target, string &best) {
        int i = cur.size();
        if (i >= n / 2) {
            string right = cur;
            reverse(right.begin(), right.end());
            string full = cur + m + right;
            if (full > target) best = min(best, full);
            return;
        }

        auto it = pool.upper_bound(target[i]);
        if (it != pool.end()) {
            char xc = *it;
            pool.erase(it);

            string left = cur;
            left.push_back(xc);
            for (auto ch : pool) left.push_back(ch);

            string right = left;
            reverse(right.begin(), right.end());
            string full = left + m + right;

            if (full > target) best = min(best, full);
            pool.insert(xc);
        }

        auto findIt = pool.find(target[i]);
        if (findIt == pool.end()) return;

        cur.push_back(target[i]);
        pool.erase(findIt);
        find_ans(cur, n, m, pool, target, best);
    }

    string lexPalindromicPermutation(string s, string target) {
        int n = s.size();
        if ((int)target.size() != n) return "";

        map<char, int> mpp;
        for (char c : s) mpp[c]++;

        string m = "";
        multiset<char> pool;
        for (auto &[ch, cnt] : mpp) {
            if (cnt % 2 == 1) {
                if (n % 2 == 0) return "";
                if (!m.empty()) return "";
                m.push_back(ch);
            }
            for (int i = 0; i < cnt / 2; ++i) pool.insert(ch);
        }

        string best(n, '{');
        find_ans("", n, m, pool, target, best);

        if (best == string(n, '{')) return "";
        return best;
    }
};
