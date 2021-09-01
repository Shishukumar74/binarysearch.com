bool solve(vector<int>& nums) {
    int n = nums.size();
    bool v1 = true, v2 = true;
    for (int i = 1; i < n && (v1 || v2); ++i) {
        if (v1) v1 = (nums[i] > nums[i - 1]);
        if (v2) v2 = (nums[i] < nums[i - 1]);
    }
    return v1 || v2;
}