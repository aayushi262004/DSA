class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n=questions.size();
        vector<long long>dp(n+1,0);
        for(int i=n-1;i>=0;i--){
            int val=questions[i][0];
            int next=(i+questions[i][1]+1);
            long long take=val+(next<n? dp[next]:0);
            long long dont_take=dp[i+1]; 
            dp[i]=max(take,dont_take);
        }
        return dp[0];

    }
};