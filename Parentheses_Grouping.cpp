vector<string> solve(string s) {
    int count = 0;
    vector<string>result;
    int j = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') count++;
        if (s[i] == ')') count--;
        if (count == 0) {
            result.push_back(s.substr(j, i - j + 1));
            j = i + 1;
        }
    }
    return result;
}