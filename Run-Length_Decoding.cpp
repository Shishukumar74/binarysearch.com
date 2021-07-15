string solve(string s) {
    string p, m;
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i]))
            p += s[i];
        else {
            m += string(stoi(p), s[i]);
            p = "";
        }
    }
    return m;
}