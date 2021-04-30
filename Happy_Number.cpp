bool solve(int n) {
    int rem = 0, sum = 0;
    while(1){
        while(n>0){
            rem = n%10;
            sum = sum+(rem*rem);
            n = n/10;
        }
        if(sum==0 || sum/10==0 && sum != 7)
        break;
        n = sum;
        sum = 0;
    }
    if(sum==1) return true;
    else return false;
    
}