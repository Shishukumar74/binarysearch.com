vector<string> solve(string s, int k) {
    vector<string>result(k);
    for(int i=0;i<s.length();i++){
        result[i%k].push_back(s[i]);
    }
    return result;
    
}