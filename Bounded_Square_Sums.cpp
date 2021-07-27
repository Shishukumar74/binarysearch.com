int solve(vector<int>& a, vector<int>& b, int lower, int upper) {
    for (int& v : a) v = v * v;
    for (int& v : b) v = v * v;
    sort(a.begin(), a.end());

    int ans = 0;
    for (int n : b) {
        auto l = lower_bound(a.begin(), a.end(), lower - n);
        auto h = upper_bound(a.begin(), a.end(), upper - n);
        ans += (h - l);
    }
    return ans;
}