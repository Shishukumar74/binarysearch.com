int solve(string s) {
    int a = 0, b = 0, c = 0;
    for (char ch : s) {
        if (ch == 'a')
            a = 1 + 2 * a;
        else if (ch == 'b')
            b = a + 2 * b;
        else
            c = b + 2 * c;
    }
    return c;
}