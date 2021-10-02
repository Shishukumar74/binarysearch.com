int solve(string s) {
    int res = 0, n = s.length(), carry = 0;

    for (int i = n - 1; i > 0; --i) {
        ++res;
        if ((s[i] - '0') ^ carry) ++res;
        carry = carry || s[i] == '1';
    }
        return res + carry;
}