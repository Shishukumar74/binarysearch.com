bool solve(vector<vector<string>>& matrix) {
    int n = matrix.size();
    vector<set<string>>row(n), col(n);
    set<string>s;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            row[i].insert(matrix[i][j]);
            col[j].insert(matrix[i][j]);
            s.insert(matrix[i][j]);
            }
    }
    if(s.size()!=n) return false;
    for(int i=0;i<n;i++){
        if(row[i].size()!=n || col[i].size()!=n) {
            return false;
        }

    }
    return true;
}