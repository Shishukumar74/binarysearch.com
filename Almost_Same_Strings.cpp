bool solve(vector<string>& words) {
    unordered_set<string> st;
    for (string& word : words) {
        for (char& c : word) {
            char old = c;
            c = '*';
            if (!st.insert(word).second) return true;
            c = old;
        }
    }
    return false;
}