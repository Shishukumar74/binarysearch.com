int solve(vector<int>& nums) {
      int ans = 0;
    unordered_map<int, int> hash;
    for (int i = 0; i < (int)nums.size(); ++i) {
        for (int j = i + 1; j < (int)nums.size(); ++j) ans += 8 * hash[nums[i] * nums[j]]++;
    }

    return ans;
}