int solve(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int result = INT_MAX;
    int n = nums.size();
    for(int i=0;i<=k;i++){
        result = min(result, nums[i+n-k-1] - nums[i]);
    }
    return result;
    
}