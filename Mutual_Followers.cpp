vector<int> solve(vector<vector<int>>& relations) {
    set<int>result;
    vector<int>temp;
    set<pair<int, int>>s;
    for(int i=0;i<relations.size();i++){
        s.insert({relations[i][0], relations[i][1]});
    }
    for(auto x : s){
        if(s.find({x.second, x.first}) != s.end()){
            result.insert(x.second);
            result.insert(x.first);
        }
    }
    return vector<int>(result.begin(), result.end());
}