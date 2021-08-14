int solve(string s) {
      int flips = 1, res = 0;
    for (int i = 0, j = 0; i < s.size(); i++) {
        if (s[i] == '0') flips--;
        while (flips < 0) {
            if (s[j] == '0') flips++;
            j++;
        }
        res = max(res, i - j + 1);
    }
    return res; 
}