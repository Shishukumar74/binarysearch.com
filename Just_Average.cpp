bool solve(vector<int>& nums, int k) {
    int n = nums.size();
    int sum = accumulate(nums.begin(), nums.end(), 0);
    for(int i=0;i<n;i++){
        if(sum - nums[i] == (n-1)*k)
        return true;
    }
    return false;
    
}