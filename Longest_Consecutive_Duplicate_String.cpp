int solve(string s) {
    if(s.length()==0)
    return 0;
    int maximum = INT_MIN;
    int current = 1;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==s[i-1]){
            current++;
        }else{
            maximum = max(maximum,current);
            current = 1;
        }
    }
    maximum = max(maximum,current);
    return maximum;
    
}