int solve(vector<int>& nums, int diff) {
    unordered_map<int, int>dp;
    int result = 1;
    for(int i=0;i<nums.size();i++){
        dp[nums[i]] = 1+dp[nums[i] - diff];
        result = max(result, dp[nums[i]]);
    }
    return result;
}