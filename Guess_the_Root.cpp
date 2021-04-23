int solve(int n) {
    long long int low = 1, high = n;
    while(low<=high){
        long long int middle = (low+high)>>1;
        if(middle*middle == n){
            return middle;
        }else if(middle*middle<n){
            low = middle+1;
        }else if(middle*middle>n){
            high = middle-1;
        }
    }
    return high; 
    
}