string solve(string s) {
       vector<int> fun(s.size());
    for (int i=s.size()-1, j=i; i>=0; i--) {
        if (s[j] > s[i]) j=i; 
        fun[i] = j;
    }

    for (int i=0; i<s.size(); i++) {
        if (s[i] <= s[fun[i]]) continue;
        swap(s[i], s[fun[i]]);
        break;
    }
    return s;
    
}