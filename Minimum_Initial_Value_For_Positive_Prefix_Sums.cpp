int solve(vector<int>& nums) {
    int sum = 0;
    int n = nums.size()-1;
    for(int i=n;i>=0;--i){
        sum = sum+nums[i];
        if(sum>0) sum=0;
    }
    return 1-sum;
    
}