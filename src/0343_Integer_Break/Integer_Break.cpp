class Solution {
public:
    int integerBreak(int n) {
        if(n < 2) return 0;
        if(n == 2) return 1;
        if(n == 3) return 2;
        vector<int> dp(n + 1, 0); //dynamic programming
        dp[0] = 1, dp[1] = 1;
        for(int i = 2; i <= n; i++) {
            for(int j = 1; j <= i; j++) dp[i] = max(dp[i], j * dp[i - j]);
        }
        return dp[n];
    }
};
