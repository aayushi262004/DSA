class Solution {
public:
    int lcs(string &s, string &dup, int i,int j, vector<vector<int>>&dp){
        if(i<0 || j<0) return 0;
        if(dp[i][j] != -1)return dp[i][j];
        if(s[i] == dup[j]){
            return dp[i][j] = 1+ lcs(s,dup, i-1,j-1, dp);
        }else{
            return dp[i][j] = max(lcs(s,dup, i , j-1,dp),lcs(s,dup,i-1,j,dp));
        }
    return 0;

    }
    int longestPalindromeSubseq(string s) {
       string dup = s;
       reverse(dup.begin(), dup.end());
       int n = s.size();
       vector<vector<int>>dp(n, vector<int>(n,-1));
       return lcs(s,dup,n-1,n-1,dp); 
    }
};