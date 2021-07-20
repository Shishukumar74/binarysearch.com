int solve(vector<int>& nums, int k) {
     int left = 0;
    int right = nums.size();
    while (left < right) {
        int mid = left + (right - left) / 2;
        if ((nums[mid] - nums[0] - mid) <= k)
            left = mid + 1;
        else
            right = mid;
    }
    return left + nums[0] + k;
}