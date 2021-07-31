int solve(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int left = 0, right = k - 1, ans = INT_MAX;
    while (right < nums.size()) {
        ans = min(ans, nums[right] - nums[left]);
        right++, left++;
    }
    return ans;
}