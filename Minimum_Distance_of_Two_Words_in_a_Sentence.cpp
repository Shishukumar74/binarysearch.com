int solve(string text, string word0, string word1) {
     int i = -1, j = -1, count = 0;
    stringstream s(text);
    string w;
    int ans = INT_MAX;
    while (s >> w) {
        ++count;
        if (w == word0) {
            if (j != -1) ans = min(ans, count - j - 1);
            i = count;
        }
        if (w == word1) {
            if (i != -1) ans = min(ans, count - i - 1);
            j = count;
        }
    }
    return ans == INT_MAX ? -1 : ans;
}