int solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int difference = INT_MIN;
    for(int i=1; i<nums.size();i++){
       difference = max(difference, nums[i]-nums[i-1]);
    }
    return difference;
    
}