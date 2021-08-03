string next(const string& s) {
    string ans;
    for (int i = 0; i < s.size(); i++) {
        int c = 1;
        while (i + 1 < s.size() and s[i] == s[i + 1]) i++, c++;
        ans += to_string(c) + s[i];
    }
    return ans;
}

string solve(int n) {
    string s = "1";
    while (--n > 0) {
        s = next(s);
    }
    return s;
}
