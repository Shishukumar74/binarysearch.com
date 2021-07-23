int solve(string s, int k) {
    return pow(unordered_set<char>(begin(s),end(s)).size(), (k + 1) / 2);
}