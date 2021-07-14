string solve(string s) {
    string result;
    for (int i = 0; i < s.size();) {
        while (!result.empty() && i < s.size() && s[i] == result.back()) {
            while (i < s.size() && s[i] == result.back()) i++;
            result.pop_back();
        }
        if (i < s.size()) result.push_back(s[i++]);
    }
    return result;
}