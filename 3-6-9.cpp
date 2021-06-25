bool num(int n){
    while(n){
        int digit = n%10;
        if(digit==3 || digit==6 || digit==9 ) return true ;
        n = n/10;
    }
    return false;
}
vector<string> solve(int n) {
    vector<string>res;
    if(n==0) return res;
    for(int i=1;i<=n;++i){
        if(i%3==0 || i%6==0 || i%9==0)
        res.push_back("clap");
        else{
            if(num(i)==true)
            res.push_back("clap");
            else
            res.push_back(to_string(i));
        }
    }
    return res;
}
