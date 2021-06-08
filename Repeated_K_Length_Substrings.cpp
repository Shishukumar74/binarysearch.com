int solve(string s, int k) {
    unordered_map<string, int>mp;
    int count = 0;
    int n = s.length();
    for(int i=0;i<=n-k;i++){
        mp[s.substr(i,k)]++;
    }
    unordered_map<string,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        if(it->second>1){
            count++;
        }
    }
    return count;
}