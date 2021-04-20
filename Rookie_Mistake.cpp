bool solve(string s) {
    bool found = false, left = true, right = true;
    for(int i=0; s[i]!='\0';i++){
        if(s[i] == 'B' && found == false)
        left = false;
        if(s[i] == 'B' && found == true)
        right = false;
        if(s[i] == 'R')
        found = true;
    }
    return left || right;
    
}