int solve(string s) {
    int cnt = 0;
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(')
            sum++;
        else
            sum--;
        if (sum < 0) sum = 0, cnt++;
    }
    return sum + cnt;
}