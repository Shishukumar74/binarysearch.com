bool solve(string s) {
    bool arr[26] = {0};
    for(int i=0;i<s.length();i++){
        if(arr[s[i]-'a'])
        return 0;
        else
        arr[s[i]-'a']=1;
    }
    return 1;
}