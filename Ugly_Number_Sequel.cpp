int solve(int n) {
    set<int>s;
    s.insert(1);
    while(n--){
        int temp = *s.begin();
        s.insert(2*temp);
        s.insert(3*temp);
        s.insert(5*temp);
        s.erase(temp);
    }
    return *s.begin();
    
}