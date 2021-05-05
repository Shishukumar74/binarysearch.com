int solve(vector<int>& nums) {
    set<int>s;
    int maximum = -1;
    for(int i=0;i<nums.size();i++){
        s.insert(nums[i]);
    }
    for(int i=0;i<nums.size();i++){
        if(s.find(nums[i]*-1) != s.end()){
            maximum = max(maximum, nums[i]);
        }
    }
    return maximum;
    
}