int solve(vector<int>& a, vector<int>& b) {
     int ans = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int lhsa = 0;
    int rhsa = (int)a.size() - 1;
    int lhsb = 0;
    int rhsb = (int)b.size() - 1;
    while (lhsa <= rhsa && lhsb <= rhsb) {
        if (a[lhsa] * b[lhsb] >= a[rhsa] * b[rhsb]) {
            ans += a[lhsa++] * b[lhsb++];
        } else {
            ans += a[rhsa--] * b[rhsb--];
        }
    }
    return ans;
    
}