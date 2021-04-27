int solve(vector<int>& nums) {
    int n = nums.size();
    int difference = nums[n-1] - nums[0];
    int arithmetic_sequence = difference/n;
    for(int i=1;i<n;i++){
        if(nums[i]-nums[i-1] != arithmetic_sequence){
            return nums[i-1] + arithmetic_sequence ;
        }
    }
    return nums[0] + arithmetic_sequence;

    
}