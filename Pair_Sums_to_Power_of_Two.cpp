int solve(vector<int>& nums) {
    unordered_map<int, int> ump;
    for (int i : nums) ump[i]++;
    int n = nums.size();
    int ans = 0;
    for (int i = 0; i < 32; i++) {
        int sum = 1 << i;
        for (int i = 0; i < n; i++) {
            ans += ump[sum - nums[i]];
            if (sum - nums[i] == nums[i]) ans--;
        }
    }
    return ans / 2;

    
}