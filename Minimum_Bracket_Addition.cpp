int solve(string s) {
    int left = 0, right = 0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==')')
            right>0?right--:left++;
            else
            right++;
        }
        return right+left;
    }
    
    
