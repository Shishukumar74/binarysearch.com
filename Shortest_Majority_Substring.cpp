int solve(string s) {
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            return 2;
        }
    }
    for(int i=2;i<s.size();i++){
        if(s[i]==s[i-2]){
            return 3;
        }
    }
    return -1;
    
}