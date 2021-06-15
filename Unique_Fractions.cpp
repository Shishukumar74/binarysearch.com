bool comp(vector<int> a, vector<int> b) {
    return ((double)a[0] / a[1]) < ((double)b[0] / b[1]);
}
vector<vector<int>> solve(vector<vector<int>>& fractions) {
    for (int i = 0; i < fractions.size(); i++) {
        int g = __gcd(abs(fractions[i][0]), abs(fractions[i][1]));
        fractions[i][0] /= g;
        fractions[i][1] /= g;
    }
    sort(fractions.begin(), fractions.end(), comp);
    vector<vector<int>> out;
    out.push_back(fractions[0]);
    for (int i = 1; i < fractions.size(); i++) {
        if (fractions[i][0] != out[out.size() - 1][0] or fractions[i][1] != out[out.size() - 1][1])
            out.push_back(fractions[i]);
    }
    return out;
}
