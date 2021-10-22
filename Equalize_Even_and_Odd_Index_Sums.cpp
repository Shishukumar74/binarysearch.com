int solve(vector<int>& A) {
    int N = A.size();
    int a = 0;
    int b = 0;

    int c = 0;
    int d = 0;

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0)
            c += A[i];
        else
            d += A[i];
    }

    int cnt = 0;

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0)
            c -= A[i];
        else
            d -= A[i];

        if (a + d == b + c) cnt++;

        if (i % 2 == 0)
            a += A[i];
        else
            b += A[i];
    }
return cnt;
}