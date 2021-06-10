int solve(vector<int>& nums) {
    int biggestsell = 0, max_profit = 0;
    for(int i = nums.size()-1; i>=0; --i){
    biggestsell = max(biggestsell, nums[i]);
    max_profit += biggestsell - nums[i];
    }
    return max_profit;
}