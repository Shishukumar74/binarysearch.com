vector<string> solve(vector<string>& s) {
    int n = s.size();
    for (int i = 0; i < n; i++) {
        int j = i+1;
        while (j < n and s[j] != " ") j++;
        reverse(s.begin() + i, s.begin() + j);
        i = j;
    }
    reverse(s.begin(), s.end());
    return s;
    
}