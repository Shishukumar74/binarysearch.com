int solve(string s) {
    int i=0, result = 0, mod = 1e9+7;
    for(int j=0;j<s.length();j++){
        if(s[j]=='0')
        i = j+1;
        else
        result = (result+j-i+1)%mod;
    }
    return result;
}