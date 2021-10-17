int solve(vector<int>& nums) {
    long long res = 0, sum = 0, mod = (1e9 + 7);
    unordered_map<long, long> hm;
    hm.insert({0, 1});
    for (int& num : nums) {
        sum = (sum + num) % 2;
        res += hm[sum ^ 1];
        hm[sum]++;
    }
    return (int)(res % mod);
}