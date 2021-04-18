int solve(vector<int>& nums) {
    int even = 0, odd = 0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]%2==0)
        even++;
        else
        odd++;
    }
    return even*odd;
    
}