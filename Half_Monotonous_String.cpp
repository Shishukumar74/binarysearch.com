int solve(string s) {
    int n = s.length(), ans = n;
    for(char ch = 'a'; ch <= 'z'; ch++) {
        int answer1 = 0, answer2 = 0, answer3 = 0;
        for(int i = 0;  i < n; i++) {
            if(i < n/2) {
                answer2 += s[i] > ch;
                answer3 += s[i] <= ch;
            } else {
                answer2 += s[i] <= ch;
                answer3 += s[i] > ch; 
            }
            answer1 += ch != s[i];
        }
        ans = min({ans, answer1,answer2,answer3});
    }
    return ans;
}