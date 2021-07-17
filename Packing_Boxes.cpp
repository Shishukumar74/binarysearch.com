vector<vector<int>> solve(vector<int>& nums) {
    vector<vector<int>> result;
    if (!nums.size()) return result;

    result.push_back({nums[0]});
    int k = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (result[k].back() != nums[i]) {
            k++;
            result.push_back({nums[i]});

        } else
            result[k].push_back(nums[i]);
    }
    return result;
}