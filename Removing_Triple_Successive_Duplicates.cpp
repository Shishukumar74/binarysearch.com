int solve(string s) {
    int count = 0;
    int n = s.size()-2;
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1] && s[i+1]==s[i+2]){
            count++;
            i = i+2;
        }
    }
    return count;
    
}