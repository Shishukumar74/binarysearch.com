bool solve(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
    for (int i = 1; i < intervals.size(); i++) {
        if (intervals[i][0] == intervals[i - 1][0]) {
            return true;
        } else {
            if (intervals[i][1] <= intervals[i - 1][1]) {
                return true;
            }
        }
    }
    return false;
}