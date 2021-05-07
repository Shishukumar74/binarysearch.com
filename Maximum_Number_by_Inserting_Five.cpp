int solve(int n) {
    int j = 1, rem = 0;
    int maximum = INT_MIN;
    int k = (n<0)?-5:5;
    while(1){
        int f = k*j;
        rem = n%j;
        int ans = (n/j)*j*10;
        maximum = max(maximum, ans+f+rem);
        if(rem==n) break;
        j *= 10;
    }
    return maximum;
    
}