int solve(vector<int>& nums, int target) {
    int n = nums.size();
    int low = 0, high = n - 1;
    int idx = n;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] > target) {
            idx = mid;
            high = mid - 1;
        } else if (nums[mid] <= target) {
            low = mid + 1;
        }
    }
    return idx;
}
