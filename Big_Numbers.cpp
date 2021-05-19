int solve(vector<vector<int>>& matrix) {
       int rows = matrix.size();
    int cols = matrix[0].size();

    vector<int> rowMaxes(rows), colMaxes(cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            rowMaxes[i] = max(rowMaxes[i], matrix[i][j]);
            colMaxes[j] = max(colMaxes[j], matrix[i][j]);
        }
    }

    int count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == rowMaxes[i] && matrix[i][j] == colMaxes[j]) count++;
        }
    }

    return count;
    
    
}