int solve(vector<int>& nums) {
    multiset<int>ms;
    for(int i : nums){
        auto it = ms.lower_bound(i);
        if(it != ms.begin()) ms.erase(--it);
        ms.insert(i);
    }
    return ms.size();

}