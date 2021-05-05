int solve(vector<vector<int>>& intervals, int point) {
    int count = 0;
    int n = intervals.size();
    for(int i=0;i<n;i++){
        if(intervals[i][0]<=point && intervals[i][1]>=point){
            count++;
        }
    }
    return count;
    
}