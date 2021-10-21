int solve(vector<int>& nums, int k) {
    int cs = accumulate(nums.begin(), nums.end(), 0), rs = 0, ans = 0, n = nums.size();
    for (int i = 0; i < 2 * n; i++) {
        if (k == 0 or (k == 1 and i >= n)) break;
        if (i == n) rs += max(0, (k - 2) * cs);
        rs = max({0, rs + nums[i % n]});
        ans = max(ans, rs);
    }
    return ans;
}