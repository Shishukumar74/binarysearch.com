class TicTacToe {
    int n;
    unordered_map<int, int> row[2], col[2], diag[2], cross[2];

    public:
    TicTacToe(int n) : n(n) {
    }

    int move(int r, int c, bool me) {
        int winner = 2 * me - 1;
        if (++row[me][r] == n) return winner;
        if (++col[me][c] == n) return winner;
        if (++diag[me][r + c] == n) return winner;
        if (++cross[me][r - c] == n) return winner;
        return 0;
    }
};