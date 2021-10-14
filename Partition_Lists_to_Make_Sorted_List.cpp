int solve(vector<int>& a) {
    vector<int> q;
    for (int i = 0; i < a.size(); i++) {
        for (int j = q.size() - 1; j > 0; j--) {
            if (a[i] >= q[j - 1]) break;
            q[j - 1] = q[j];
            q.pop_back();
        }
        if (q.empty() || a[i] >= q.back()) {
            q.push_back(a[i]);
        }
    }
    return q.size();
}