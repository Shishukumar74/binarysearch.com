int solve(vector<int>& nums) {
    unordered_set<int> set(nums.begin(), nums.end());

    int i = 1;
    while (1) {
        if (set.find(i) != set.end()) {
            i++;
        } else
            return i;
    }

    return 0;  
}
