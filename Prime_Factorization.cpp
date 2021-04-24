vector<int> solve(int n) {
    vector<int>v;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            v.push_back(i);
            n /= i;
        }
    }
    if(n != 1) v.push_back(n);
    return v;
    
}