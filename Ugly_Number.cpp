bool solve(int n) {
    if(n==0 || n<0)
    return false;
    if(n==1)
    return true;
    if(n%2==0){
        return solve(n/2);
    }
    if (n%3==0){
        return solve(n/3);
    }
    if (n%5==0){
        return solve(n/5);
    }
    return false;
    
}