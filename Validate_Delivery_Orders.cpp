bool solve(vector<string>& orders) {
    unordered_map<int, int>visit;
    int cur = 0;
    for(auto& str : orders){
        int value = stoi(str.substr(1));
        if(str[0]=='P'){
            if(visit.count(value)) return false;
            visit[value] = 1;
            cur += 1;
        }else{
            if(visit[value] != 1) return false;
            visit[value] = 2;
            cur -= 1;
        }
    }
    return cur == 0;
}