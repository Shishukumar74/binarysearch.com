int solve(vector<int> &nums) {
    int res = 0, mask = 0;
    for (int i = 31; i >= 0; --i) {
        mask |= 1 << i;
        unordered_set<int> hash;
        for (const auto &num : nums) hash.insert(num & mask);
        int best = res | (1 << i);
        for (const auto &x : hash) {
            if (hash.count(x ^ best)) {
                res = best;
                break;
            }
        }
    }

    return res;
}

