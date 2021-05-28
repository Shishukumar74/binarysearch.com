bool solve(string s, string t) {
    int first_hash[26] = {0};
    int second_hash[26] = {0};
    for(int i=0;i<s.size();i++){
        if((first_hash[s[i]-'a'] != 0) && (first_hash[s[i]-'a'] != t[i])) return false;

        if((second_hash[t[i]-'a'] != 0) && (second_hash[t[i]-'a'] != s[i])) return false;
         first_hash[s[i]-'a'] = t[i];
         second_hash[t[i]-'a'] = s[i];
    }
    return true;
    
}