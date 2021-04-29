int solve(vector<int>& nums) {
    int first = 0;
    int second = 0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        first = (first^nums[i]) & (~second);
        second = (second^nums[i]) & (~first);
    }
    return first;
    
}