vector<int> solve(vector<int>& nums) {
    int i, j;
    for (i = nums.size() - 2; i >= 0; i--) {
        if (nums[i] > nums[i + 1]) break;
    }
    if (i < 0) return nums;
    for (j = nums.size() - 1; j >= 0; j--) {
        if (j > 0 && nums[j] == nums[j - 1]) continue;
        if (nums[j] < nums[i]) break;
    }
    swap(nums[i], nums[j]);
    return nums;
}