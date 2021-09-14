int solve(vector<int>& nums) {
    int n = nums.size();
    int sum = 0, ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        sum = max(sum + nums[i], nums[i]);
        ans = max(sum, ans);
    }

    return ans;
}
