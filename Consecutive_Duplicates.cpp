string solve(string s) {
    string res = "";
    for(int i = 0;s[i]!='\0';i++){
        if(s[i]==s[i+1])
        continue;
        else
        res = res+s[i];
    }
    return res;
    
}