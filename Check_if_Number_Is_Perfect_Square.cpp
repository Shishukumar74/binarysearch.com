bool solve(int n) {
    if(n==0)
    return true;
    if(n<0)
    return false;
    long long int low = 1, high = n;
    while(low<=high){
        long long int mid = (low+high)>>1;
        if(mid*mid == n){
            return mid;
        }else if(mid*mid<n){
            low = mid+1;
        }else if(mid*mid>n){
            high = mid-1;
        }

    }
    return false;
    
}