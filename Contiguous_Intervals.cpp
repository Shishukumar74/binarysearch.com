vector<vector<int>> solve(vector<int>& nums) {
  sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    int temp, n = nums.size();
    for (int i = 0; i < n; i++) {
        temp = nums[i];
        while (i < n - 1 && nums[i] + 1 == nums[i + 1]) i++;
        result.push_back({temp, nums[i]});
    }
    return result;
}