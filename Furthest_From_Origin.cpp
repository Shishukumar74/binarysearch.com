int solve(string s) {
    int left = 0, right = 0, ques = 0;
    for(int i=0;i<s.length();i++)
    if(s[i]=='L')
    left++;
    else if(s[i]=='R')
    right++;
    else
    ques++;
    return abs(right-left)+ques;
    
}