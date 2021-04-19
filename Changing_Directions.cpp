int solve(vector<int>& nums) {
    int n = nums.size();
    int cnt = 0;
    if(nums.empty())
    return 0;
    for(int i=1;i<n-1;i++){
        if(nums[i-1]<nums[i] && nums[i]>nums[i+1])
        cnt++;
        else if(nums[i-1]>nums[i] && nums[i]<nums[i+1])
        cnt++;

    }
    return cnt;
    
}