int solve(vector<int>& nums, int k, int target) {
    int total = target-accumulate(nums.begin(), nums.end(), 0);
    return abs(total/k) + (total%k != 0);
}