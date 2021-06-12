string solve(string a, string b) {
    string ans = "";
    int sum = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;
    while (i >= 0 or j >= 0 || sum) {
        if (i >= 0 and j >= 0) {
            sum += a[i--] - '0' + b[j--] - '0';
        } else if (i >= 0) {
            sum += a[i--] - '0';
        } else if (j >= 0) {
            sum += b[j--] - '0';
        }
        ans += sum % 10 + '0';
        sum /= 10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
