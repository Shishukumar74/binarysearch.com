int solve(vector<int>& nums) {
    int minimum = INT_MAX;
    int maximum = INT_MIN;
    for (int i = 0; i < nums.size(); i++) {
        minimum = min(minimum, nums[i]);
        maximum = max(maximum, nums[i]);
    }
    return maximum - minimum;
    
}