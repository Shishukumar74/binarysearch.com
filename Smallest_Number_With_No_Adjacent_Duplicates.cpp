string solve(string s) {
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='?'){
            if((i-1<0 || s[i-1] != '1') && (i+1>=n || s[i+1] != '1' )){
                s[i] = '1' ;
            }else if((i-1<0 || s[i-1] != '2') && (i+1>=n || s[i+1] != '2' )){
                s[i] = '2';
            }else if((i-1<0 || s[i-1] != '3') && (i+1>=n || s[i+1] != '3' )){
                s[i] = '3';
            }
        }
    }
    return s;
}