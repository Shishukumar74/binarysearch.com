bool solve(vector<vector<int>>& coordinates) {
    int n = coordinates.size();
    if (n <= 2) return true;
    double slope = (double)(coordinates[1][1] - coordinates[0][1]) / (coordinates[1][0] - coordinates[0][0]);
    for (int i = 1; i < n; i++) {
        if ((double)(coordinates[i][1] - coordinates[i - 1][1]) / (coordinates[i][0] - coordinates[i - 1][0]) != slope) return false;
    }
    return true;
}