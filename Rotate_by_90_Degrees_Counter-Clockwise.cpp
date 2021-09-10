vector<vector<int>> solve(vector<vector<int>>& matrix) {
     for (int i = 0; i < matrix.size(); i++) {
        for (int j = i; j < matrix.size(); j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < matrix.size(); i++) {
        int L = 0, R = matrix.size() - 1;
        while (L <= R) {
            swap(matrix[L++][i], matrix[R--][i]);
        }
    }
    return matrix;
}