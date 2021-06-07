string solve(string s, int i, int j) {
    while(s.size()<i%s.size()+j-i){
        s += s;
    }
    return s.substr(i%s.size(), j-i);
}