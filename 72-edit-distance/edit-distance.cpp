
class Solution {
public:
    int solve(string &s, string &dup, int i, int j,
              vector<vector<int>>& dp) {

        if (i == 0) return j;
        if (j == 0) return i;

        if (dp[i][j] != -1) return dp[i][j];

        if (s[i-1] == dup[j-1]) {
            return dp[i][j] = solve(s, dup, i-1, j-1, dp);
        } else {
            return dp[i][j] = 1 + min({
                solve(s, dup, i, j-1, dp),     // Insert
                solve(s, dup, i-1, j, dp),     // Delete
                solve(s, dup, i-1, j-1, dp)    // Replace
            });
        }
    }

    int minDistance(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();

        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));

        return solve(word1, word2, m, n, dp);
    }
};
