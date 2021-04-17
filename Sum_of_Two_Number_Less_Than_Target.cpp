int solve(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int low = 0, high = n-1;
    int maximum = INT_MIN;
    while(low<high){
        int sum = nums[low] + nums[high];
        if(sum<target){
            maximum = max(sum, maximum);
            low++;
        }else
        {
            high--;
        }
    }
    return maximum;
    
}