int solve(int a) {
    int factorial = 1, count = 1;
    while(factorial>0){
        factorial = factorial*count;
        if(factorial==a)
        return count;
        if(factorial>a)
        return -1;
        count++;
    }
    return -1;
    
}