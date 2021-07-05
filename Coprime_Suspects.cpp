int gcd(int a, int b){
    if(b%a==0)
    return a;
    else
    return gcd(b, a%b);
}
int solve(int a, int b) {
    if(gcd(a,b) != 1){
        return 0;
    }
    if(gcd(a, b+1) != 1){
        return 1;
    }
    if(gcd(a, b-1) != 1){
        return 1;
    }
    if(gcd(a+1, b) != 1){
        return 1;
    }
    if(gcd(a-1, b) != 1){
        return 1;
    }
    return 2;
}