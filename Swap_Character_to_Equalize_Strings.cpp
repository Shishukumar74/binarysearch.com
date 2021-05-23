bool solve(string s, string t) {
    int ans = 0;
    for(int i=0;t[i]!='\0';i++){
        ans ^= t[i];
    }
    for(int i=0;s[i]!='\0';i++){
        ans ^= s[i];
    }
    return ans == 0;
    
}