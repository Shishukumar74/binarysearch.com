string solve(string s) {
    string s1;
    for(int i = 0; s[i]!='\0'; i++){
        int cnt = 1;
        while(s[i]==s[i+1]){
            cnt++;
            i++;
        }
        s1 = s1+to_string(cnt);
        s1.push_back(s[i]);;
    }
    return s1;
    
}