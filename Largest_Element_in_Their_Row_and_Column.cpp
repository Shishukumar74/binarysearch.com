int solve(vector<vector<int>>& matrix) {
    vector<int> row(matrix.size(), 0), col(matrix[0].size(), 0);
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            col[j] += matrix[i][j];
            row[i] += matrix[i][j];

        }
    }
    int result = 0;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
             result += (matrix[i][j] == 1 && row[i] == 1 && col[j] == 1);
        }
    }
    return result;
}