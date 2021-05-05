int solve(string s) {
    int first = 0;
    int second = 0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='1'){
            first++;
        }
        else{
            second++;
        }
    }
    return abs(first-second);
    
}