int solve(vector<int>& nums) {
    int ans = 0, cur_len = 0, prev_len = 0;
    for (int i = 2; i < nums.size(); i++) {
        if (nums[i - 1] - nums[i - 2] == nums[i] - nums[i - 1])
            cur_len = !prev_len ? 3 : prev_len + 1;
        else
            cur_len = 0;
        ans += max(0, cur_len - 2);
        prev_len = cur_len;
    }
    return ans;
}