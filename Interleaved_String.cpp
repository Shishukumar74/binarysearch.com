string solve(string s0, string s1) {
    string result = "";
    int i = 0, j = 0;
    int n = s0.length();
    int m = s1.length();
    while(i<n || j<m){
        if(i<n) result.push_back(s0[i++]);
        if(j<m) result.push_back(s1[j++]);
    }
    return result;
    
}