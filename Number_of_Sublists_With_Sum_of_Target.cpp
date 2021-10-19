int solve(vector<int>& nums, int k) {
    int count = 0, sum = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum == k) count++;
        count += mp[sum - k];
        mp[sum]++;
    }
    return count;
}