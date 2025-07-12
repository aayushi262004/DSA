class Solution {
public:
    vector<vector<int>> res;

    void backtrack(int start, int k, int n, vector<int>& path) {
        // Base case: if size == k and sum == n
        if (k == 0 && n == 0) {
            res.push_back(path);
            return;
        }

        // Try numbers from `start` to 9
        for (int i = start; i <= 9; i++) {
            if (i > n) break; // pruning: no need to continue if i > remaining sum

            path.push_back(i);
            backtrack(i + 1, k - 1, n - i, path); // move to next number, reduce k and n
            path.pop_back(); // backtrack
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> path;
        backtrack(1, k, n, path); // start from number 1
        return res;
    }
};
