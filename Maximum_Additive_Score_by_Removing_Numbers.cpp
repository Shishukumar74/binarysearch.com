    int solve(vector<int>& A) {
    int N = A.size();

    if (N <= 2) return 0;

    if (N == 3) return A[1] + A[0] + A[2];

    int t[N][N];
    memset(t, 0, sizeof t);

    for (int L = 2; L <= N; L++)
        for (int i = 1; i + L - 1 < N; i++) {
            int j = i + L - 1;

            for (int k = i; k < j; k++)
                t[i][j] = max(t[i][j], t[i][k] + t[k + 1][j] + A[i - 1] + A[k] + A[j]);
        }
    return t[1][N - 1];
}
