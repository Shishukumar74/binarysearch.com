int solve(vector<int>& nums) {
    map<int,int>cnt;
    int maximum = 0;
    for(int i=0;i<nums.size();i++){
        maximum = max(maximum, ++cnt[nums[i]]);
    }
    return maximum;
    
}