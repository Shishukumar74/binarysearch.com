bool solve(vector<int>& nums) {
    int a = 0, b = 0;
    for(auto & x:nums){
        a ^= x;
        b ^= x+1;
    }
    return !a && !b;
    
}