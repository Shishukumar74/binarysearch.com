bool solve(vector<int>& nums) {
    for(auto &n:nums){
        n = n*n;
    }
    sort(nums.begin(), nums.end());
    for(int i=nums.size()-1;i>=0;--i){
        int left = 0;
        int right = i-1;
        while(left<right){
            if(nums[left]+nums[right]==nums[i]) return true;
            (nums[left]+nums[right]<nums[i])?left++:right--;
        }
    }
    return false;
    
}