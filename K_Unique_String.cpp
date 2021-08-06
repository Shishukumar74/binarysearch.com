int solve(string s, int k) {
     int freq[26] = {0};
    for (auto it : s) freq[it - 'a'] += 1;
    sort(freq, freq + 26);
    int ans = 0;
    for (int i = 0; i < 26 - k; i++) ans += freq[i];
    return ans;
}