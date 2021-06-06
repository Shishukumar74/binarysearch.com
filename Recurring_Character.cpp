int solve(string s) {
    int str[26]  = {0};
    for(int i=0;i<s.length();i++){
        if(str[s[i]-'a']==0)
        str[s[i]-'a']++;
        else
        return i;
    }
    return -1;
}