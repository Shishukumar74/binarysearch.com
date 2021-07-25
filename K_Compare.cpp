int solve(vector<int>& a, vector<int>& b, int k) {
      if (k == 0) {
        return a.size();
    }
    nth_element(b.begin(), b.begin() + b.size() - k, b.end());
    int largest = b[b.size() - k];
    int ans = 0;
    for (auto x : a) ans += x < largest;
    return ans;
}