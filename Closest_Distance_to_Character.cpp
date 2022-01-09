void process(vector<int>& v, string& s, char c, int i, int j) {
    if (s[i] == c && s[j] == c) {
        for (int d = 0; i <= j; d++) v[i++] = v[j--] = d;
    } else if (s[i] == c) {
        for (int d = 0; i <= j; d++) v[i++] = d;
    } else {
        for (int d = 0; i <= j; d++) v[j--] = d;
    }
}

vector<int> solve(string s, string c) {
    vector<int> res(s.size());
    for (int i = 0, left = 0; i < s.size(); i++) {
        if (s[i] == c[0] || i == s.size() - 1) {
            process(res, s, c[0], left, i);
            left = i;
        }
    }
    return res;
}