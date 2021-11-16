int solve(vector<string>& shows, vector<int>& durations, int k) {
    unordered_map<string, int> M;
    for (int i = 0; i < shows.size(); i++) {
        M[shows[i]] += durations[i];
    }
    vector<int> top;
    for (auto m : M) {
        top.push_back(m.second);
    }
    sort(top.begin(), top.end(), greater<>());
    int ans = 0;
    for (int i = 0; i < k; i++) {
        ans += top[i];
    }
    return ans;
}