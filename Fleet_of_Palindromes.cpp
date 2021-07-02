bool solve(string s, int k) {
    int n = s.length();
    if(k>n) return false;
    vector<int> freq(26,0);
    int count=0;
    for(auto c:s){
        if(++freq[c-'a']%2)
        count++;
        else
        count--;
    }
    return count<=k;
    
}