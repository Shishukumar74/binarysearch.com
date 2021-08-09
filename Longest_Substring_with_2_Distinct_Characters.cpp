int solve(string s) {
    unordered_map<char, int> fre;
    int ans = 0;
    for (int r = 0, l = 0; r < s.size(); r++) {
        fre[s[r]]++;
        while (fre.size() > 2) {
            fre[s[l]]--;
            if (fre[s[l]] == 0) fre.erase(s[l]);
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    return ans;
}