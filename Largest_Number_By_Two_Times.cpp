bool solve(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    return nums[n-1]>2*nums[n-2];
}