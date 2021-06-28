int solve(vector<int>& nums) {
    int solve(vector<int>& nums);
    int left, right, lmax, rmin, N;

    N = nums.size();
    left = right = -1;
    lmax = INT_MIN;
    rmin = INT_MAX;

    for (int i = 0; i < N; ++i) {
        if (nums[i] >= lmax)
            lmax = nums[i];
        else
            right = i;

        if (nums[N - i - 1] <= rmin)
            rmin = nums[N - i - 1];
        else
            left = N - i - 1;
    }

    if (left == -1) return 0;

    return right - left + 1;
}
    