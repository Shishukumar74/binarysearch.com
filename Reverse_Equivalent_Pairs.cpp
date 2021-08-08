int rev_num(int n) {
    int ans = 0;

    while (n > 0) {
        ans = ans * 10 + n % 10;
        n /= 10;
    }

    return ans;
}

int solve(vector<int>& nums) {
    unordered_map<int, int> mp;
    int cnt = 0;

    for (int& i : nums) cnt = (cnt + ++mp[i - rev_num(i)]) % (int)(1e9 + 7);

    return cnt;
}