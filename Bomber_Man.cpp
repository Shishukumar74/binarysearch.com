int solve(vector<vector<int>>& matrix) {
    int M = matrix.size(), N = matrix[0].size();
    vector<int> rows(M, 1), cols(N, 1);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
            if (matrix[i][j]) rows[i] = cols[j] = 0;
    }
    return accumulate(rows.begin(), rows.end(), 0) * accumulate(cols.begin(), cols.end(), 0);
}