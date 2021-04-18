int solve(string s) {
    int result = 0;
    for(char c : s){
        result = result*3+(c - '0');
    }
    return result;

    
}