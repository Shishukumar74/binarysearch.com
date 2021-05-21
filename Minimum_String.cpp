int solve(string s, string t) {
    int count[26] = {0};
    int m = s.length();
    int n = t.length();
    for(int i=0;i<m;i++){
        count[s[i] - 'a']++;
    }
    int result = 0;
    for(int i=0;i<n;i++){
        if(count[t[i]-'a']){
            count[t[i]-'a']--;
        }else{
            result++;
        }
    }
    return result;
    
}