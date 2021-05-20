int solve(string s) {
     int sum = 0;
    int current = 0;
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i]))
            current = current * 10 + s[i] - '0';
        else {
            sum += current;
            current = 0;
        }
    }
    return sum + current;
    
}