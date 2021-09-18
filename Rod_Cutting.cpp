int solve(vector<int>& prices, int n) {
    int dp[n + 1];
    for (int i = 1; i <= n; i++) {
        dp[i] = prices[i - 1];
        for (int j = 1; j < i; j++) {
            dp[i] = max(dp[i], dp[i - j] + prices[j - 1]);
        }
    }

    return dp[n];
}
