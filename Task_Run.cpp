int solve(vector<int>& tasks, int k) {
    unordered_map<int,int>m;
    int j = 0;
    for(int i=0;i<tasks.size();i++){
        if(m.count(tasks[i])){
            j = max(j, m[tasks[i]]+k+1);
        }
        m[tasks[i]] = j++;
    }
    return j;
}