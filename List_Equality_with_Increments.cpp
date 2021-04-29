int solve(vector<int>& nums) {
    int n = nums.size();
    int result = 0;
    int minimum = INT_MAX;
    for(int i=0;i<n;i++){
        result = result+nums[i];
        minimum = min(minimum, nums[i]);
    }
    return result - (n*minimum);
    
}