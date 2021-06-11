int solve(vector<int>& nums) {
    int ans = INT_MAX;
    int m = nums[0];
    int n = nums.size();
    for(int i=2;i<n;i++){
        m = min(m, nums[i-2]);
        ans = min(ans, m+nums[i]);
    }
    return ans;
}