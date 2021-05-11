int solve(vector<int>& nums) {
    int sum = 0;
    int n = nums.size();
    for (int i = n-1; i >= 0; i--){
        sum = (sum + i * nums[i] - (n - 1 - i) * nums[i]) % 1000000007;
  }    
        sum = (sum << 1) % 1000000007;
        return sum;
}
