int solve(vector<int>& nums, int k) {
    unordered_map<int, int> m;
    int ans = 0;
    for (int i = 0, j = 0, maxf = 0; i < nums.size(); i++) {
        maxf = max(maxf, ++m[nums[i]]);
        while (i - j + 1 - maxf > k) m[nums[j++]]--;
        ans = max(ans, i - j + 1);
    }
    return ans;
}