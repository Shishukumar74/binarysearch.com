vector<int> solve(vector<int>& nums, int k) {
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end()-k);
    reverse(nums.end()-k, nums.end());
    return nums;
}