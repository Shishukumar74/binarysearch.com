int solve(string s) {
    int result = 0;

    int b = 0;
    for (int i = 0; i < s.size(); i++)

    {
        if (s[i] == 'A') {
            result = min(result + 1, b);

        } else
            b++;
    }
    return result; 
}