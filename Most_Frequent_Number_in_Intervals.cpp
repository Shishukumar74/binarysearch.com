int solve(vector<vector<int>>& intervals) {
    set<int> time;
    unordered_map<int, int> start, end;
    for (int i = 0; i < intervals.size(); ++i) {
        time.insert(intervals[i][0]);
        time.insert(intervals[i][1]);
        ++start[intervals[i][0]];
        ++end[intervals[i][1]];
    }
    int count = 0, ans = 0, maxx = 0;
    for (auto it : time) {
        count += start[it];
        if (count > maxx) {
            maxx = max(maxx, count);
            ans = it;
        }
        count -= end[it];
    }
    return ans;
}
