class Solution {
public:
    int solve(string &s, string &dup, int i , int j , vector<vector<int>>&dp){
        if(i<=0 || j<=0)return 0;
        if(dp[i][j] != -1)return dp[i][j];
        if(s[i-1]== dup[j-1]){
            return dp[i][j] = 1 + solve(s,dup, i-1,j-1,dp);
        }else{
            return dp[i][j] = max(solve(s,dup, i-1, j , dp), solve(s,dup,i, j-1, dp));
        }
        return 0;
    }
    int minInsertions(string s) {
        int n = s.size();
        string dup = s;
        reverse(dup.begin(),dup.end());
        vector<vector<int>>dp(n+1, vector<int>(n+1,-1));
        int val = solve(s,dup,n,n,dp);
        int ans = n-val;
    return ans; 
    }
};