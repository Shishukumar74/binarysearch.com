string solve(string s) {
    string result = "";
    int n = s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='<' && s[i+1]=='-'){
            if(result.length()!=0) result.pop_back();
            i++;
        }else{
            result += s[i];
        }
    }
    return result;
    
}