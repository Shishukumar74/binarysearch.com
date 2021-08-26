int solve(vector<vector<string>>& matrix, vector<string>& blocks) {
    unordered_map<string, pair<int, int>> umap;
    int row = matrix.size();
    int col = matrix[0].size();
    int dis = 0, x0 = 0, y0 = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            umap[matrix[i][j]] = {i, j};
        }
    }

    for (int i = 0; i < blocks.size(); i++) {
        string x = blocks[i];
        int x1 = umap[x].first;
        int y1 = umap[x].second;
        dis += abs(x1 - x0) + abs(y1 - y0);
        x0 = x1;
        y0 = y1;
    }
    return dis;
}