int solve(vector<int>& nums) {
    unordered_map<int, vector<int>> mp;
    int n = nums.size();
    int maxi_freq = 0, result = n;
    for (int i = 0; i < n; i++) {
        mp[nums[i]].push_back(i);
        int size = mp[nums[i]].size();
        maxi_freq = max(maxi_freq, size);
    }
    for (int i = 0; i < n; i++) {
        int size = mp[nums[i]].size();
        if (size == maxi_freq) {
            result = min(result, (mp[nums[i]][size - 1] - mp[nums[i]][0]) + 1);
        }
    }
    return result;
    
}
