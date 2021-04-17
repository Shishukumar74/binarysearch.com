bool solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int difference = nums[1] - nums[0];
    for(int i=1;i<n-1;i++){
        if(nums[i+1] - nums[i] != difference)
        return false;
    }
    return true;
}