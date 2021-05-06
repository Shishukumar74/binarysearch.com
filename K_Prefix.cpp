int solve(vector<int>& nums, int k) {
    long long sum = 0;
    int n = nums.size();
    int max_index = -1;
    for(int i=0;i<n;i++){
        if((sum+=nums[i])<=k) max_index=i;
    }
    return max_index;
    
}