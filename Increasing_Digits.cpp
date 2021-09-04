int solve(int n) {
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        ans = ans * (9 - i + 1);
        ans /= i;
    }
    return ans; 
}