bool solve(string s0, string s1) {
    if (s0.length() != s1.length()) return false;
    s0 += s0;
    return s0.find(s1) != -1;
}