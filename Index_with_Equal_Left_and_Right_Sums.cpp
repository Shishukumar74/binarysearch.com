int solve(vector<int>& nums) {
    int first = 0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        first += nums[i];
    }
    int second = 0;
    for(int j=0;j<n;j++){
        if(second == first - second - nums[j]){
            return j;
        }
        second = second + nums[j];
    }
    return -1;
    
}