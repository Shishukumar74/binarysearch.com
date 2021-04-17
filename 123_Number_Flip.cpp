int solve(int n) {
    string s = to_string(n);

    for(int i=0;s[i] !='\0';i++){
        if(s[i]=='2' || s[i]=='1'){
            s[i] = '3';
            break;
        }
    }
    return stoi(s);
    
}