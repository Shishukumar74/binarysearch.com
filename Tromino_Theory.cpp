int solve(int n) {
    int a = 0, b = 1, c = 1, d=0, mod = 1e9 + 7;
    for (int i = 1; i < n; ++i) {
        d = ((c * 2 % mod) + a) % mod;
        a = b;
        b = c;
        c = d;
    }
    return c;
}