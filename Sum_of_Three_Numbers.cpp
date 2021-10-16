bool solve(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int l = i + 1, h = n - 1;
        int curr = nums[i];
        while (l < h) {
            if (nums[l] + nums[h] + curr == k) {
                return true;
            } else if (nums[l] + nums[h] + curr > k) {
                h--;
            } else {
                l++;
            }
        }
    }

    return false;
}
