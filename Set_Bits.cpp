int solve(int n) {
    int count = 0;
    for(int i=1;i<=n;i++){
        count = count+(__builtin_popcount(i));
    }
    return count;
    
}