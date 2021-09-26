int solve(int n) {
    int start = 0;
    string s = to_string(n);
    int i = 0;
    while (i < s.size() - 1) {
        if (s[i] < s[i + 1]) {
            start = i + 1;
            i++;
        } else if (s[i] == s[i + 1]) {
            while (i < s.size() - 1 && s[i] == s[i + 1]) i++;
        } else {
            s[start] -= 1;
            for (int j = start + 1; j < s.size(); j++) {
                s[j] = '9';
            }
            i++;
        }
    }
    return stoi(s);
}