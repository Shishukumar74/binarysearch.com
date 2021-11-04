int solve(string s) {
    int maxi = INT_MIN;
    const int n = s.size();
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += (s[i] - '0');
        maxi = max(maxi, i - 2 * sum + 1);
    }
    sum += s[n - 1] - '0';
    return maxi + sum;
}