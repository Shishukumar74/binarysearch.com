bool solve(vector<int>& nums) {
    unordered_map<int, int>m;
    int index = INT_MAX;
    for(int i:nums){
        m[i]++;
    }
    for(auto i:m){
        index = min(index, i.second);
    }
    for(auto i:m)
    if(__gcd(i.second, index)==1) return false;
    return true;
    
}