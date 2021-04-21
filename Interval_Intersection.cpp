vector<int> solve(vector<vector<int>>& intervals) {
    int left = intervals[0][0];
    int right = intervals[0][1];
    int n = intervals.size();
    for(int i=1;i<n;i++){
        left = max(left, intervals[i][0]);
        right = min(right, intervals[i][1]);
    }
    return {left, right};
    
}