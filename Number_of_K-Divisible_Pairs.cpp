int solve(vector<int>& nums, int k) {
    unordered_map<int, int> m;
    int ans = 0;
    for (auto& n : nums) {
        ans += m[(k - n % k) % k];
        m[n % k] += 1;
    }
    return ans;
}