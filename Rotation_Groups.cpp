int solve(vector<string>& words) {
    unordered_set<string> visited;
    for(string &s : words){
        for(int i=0;i<s.size();i++){
            rotate(s.begin(), s.begin()+1, s.end());
            if(visited.count(s)) break;
        }
        visited.insert(s);
    }
    return visited.size();
    
}