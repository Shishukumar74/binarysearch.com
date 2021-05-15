int solve(vector<int>& tasks, vector<int>& people) {
    sort(tasks.begin(), tasks.end());
    sort(people.begin(), people.end());
    int t = 0, p = 0;
    while(t<tasks.size() && p<people.size()){
        if(tasks[t]<=people[p]){
            t++;
            p++;
        }else{
            p++;
        }
    }
    return t;
}