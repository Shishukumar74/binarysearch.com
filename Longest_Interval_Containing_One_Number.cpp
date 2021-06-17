int solve(vector<int>& nums) {
    nums.push_back(0);
    nums.push_back(100001);
    sort(nums.begin(), nums.end());
    int ans = 0;
    for (int i = 1; i < nums.size() - 1; i++){
    ans = max(nums[i + 1] - nums[i - 1] - 1, ans);
    }
    return ans;
    
}