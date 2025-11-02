#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void find_ans(string cur, int n, const string &m, multiset<char> pool, const string &target, string &best) {
        int i = cur.size();
        // If left half complete -> form full palindrome and check
        if (i >= n/2) {
            string right = cur;
            reverse(right.begin(), right.end());
            string full = cur + m + right;
            if (full > target) best = min(best, full);
            return;
        }

        // 1) Try placing a character strictly greater than target[i] here,
        //    then fill the rest of the left half with the smallest possible chars.
        auto it = pool.upper_bound(target[i]);
        if (it != pool.end()) {
            char xc = *it;
            // remove one occurrence of xc to build remaining smallest left half
            pool.erase(it);

            string left = cur;
            left.push_back(xc);
            // fill remaining positions of left half with smallest available chars
            for (auto ch : pool) left.push_back(ch);

            string right = left;
            reverse(right.begin(), right.end());
            string full = left + m + right;

            if (full > target) best = min(best, full);

            // restore xc back into pool (pool was a local copy, but we erased it: reinsert to keep logic consistent)
            pool.insert(xc);
        }

        // 2) If we can match target[i], continue recursively
        auto findIt = pool.find(target[i]);
        if (findIt == pool.end()) return; // can't match prefix -> no valid palindrome down this path

        // use target[i] here and recurse
        cur.push_back(target[i]);
        pool.erase(findIt); // remove one occurrence for recursion
        find_ans(cur, n, m, pool, target, best);
    }

    string lexPalindromicPermutation(string s, string target) {
        int n = s.size();
        if ((int)target.size() != n) return ""; // target and s must be same length

        // count frequencies
        map<char,int> mpp;
        for (char c : s) mpp[c]++;

        // determine middle character (if any) and build multiset of half chars
        string m = "";
        multiset<char> pool;
        for (auto &[ch, cnt] : mpp) {
            if (cnt % 2 == 1) {
                if (n % 2 == 0) return "";      // no odd-count allowed for even length
                if (!m.empty()) return "";      // more than one odd-count -> impossible
                m.push_back(ch);
            }
            for (int i = 0; i < cnt/2; ++i) pool.insert(ch);
        }

        // sentinel very large string
        string best(n, '{'); // '{' is after 'z' in ASCII so good sentinel

        find_ans("", n, m, pool, target, best);

        if (best == string(n, '{')) return "";
        return best;
    }
};
