int solve(vector<int>& nums, vector<int>& values) {
    int ans = INT_MIN, maximum = INT_MIN;
    int n = nums.size();
    for(int i=0;i<n;i++){
        maximum = max(maximum, values[i]-nums[i]);
        ans = max(ans, values[i]+nums[i]+maximum);
    }
    return ans;
    
}