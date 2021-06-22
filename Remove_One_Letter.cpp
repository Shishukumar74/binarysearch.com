bool solve(string s0, string s1) {
    if (s0 == s1 || s0.length() != s1.length() + 1) return false;

    int count = 1;
    int i = 0, j = 0;
    do {
        if (s0[i] == s1[j]) {
            ++i;
            ++j;
            continue;
        } else if (s0[i] != s1[j]) {
            count--;
            i++;
        }
    } while (i < s0.length());

    return count == 0;
    
}