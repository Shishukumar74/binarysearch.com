vector<int> solve(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans, lookup(nums.size());
    for (int i = 0; i < nums.size(); i++) lookup[i] = i == 0 ? nums[i] : nums[i] ^ lookup[i - 1];

    for (auto& q : queries) ans.push_back(q[0] ? lookup[q[1]] ^ lookup[q[0] - 1] : lookup[q[1]]);
    return ans;
}