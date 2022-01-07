int solve(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int n = nums.size(), ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        int left = i + 1, right = n - 1;
        int curr = nums[i];
        while (left < right) {
            if (abs(nums[left] + nums[right] + curr - k) < ans) {
                ans = abs(nums[left] + nums[right] + curr - k);
            } else if (nums[left] + nums[right] + curr > k) {
                right--;
            } else {
                left++;
            }
        }
    }

    return ans;
}
