vector<vector<int>> solve(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size(), k = max(n, m);
    vector<bool> row(k, 0), col(k, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

   for(int i=0;i<n;i++)
{
   for(int j=0;j<m;j++){
       if(row[i] || col[j]) matrix[i][j] = 0;
    }
}

    return matrix; 
}