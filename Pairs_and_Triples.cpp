bool solve(string s) {
    int cnt[10];
    memset(cnt, 0, sizeof(cnt));
    for(int i=0;s[i]!='\0';i++){
        int c = s[i]-'0';
        cnt[c]++;
    }
    bool pair = false;
    for(int i=0;i<=9;i++){
         if(cnt[i]%3==2){
             if(pair) return false;
             pair = true;

         }
         else if(cnt[i]%3!=0)
         return false;
    }
    return pair;
    
}