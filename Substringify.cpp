int solve(string s, string t) {
    int minimum = INT_MAX;
    int difference = s.size() - t.size();
    for(int i=0;i<=difference;i++){
        int count = 0;
        for(int j=i;j<i+t.size();j++){
            if(s[j] == t[j-i])
            count++;
        }
         int p = t.size()-count;
         minimum = min(minimum,p);

    }
    return minimum;
    
}