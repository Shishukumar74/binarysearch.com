int solve(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int sum = 0;
    int value = INT_MAX;
    for(auto& i:nums){
        if(k && i<0){
            i = -i;
            --k;
        }
        value = min(value, i);
        sum = sum+i;
    }
    return (k%2)?sum-value-value:sum;
    
}