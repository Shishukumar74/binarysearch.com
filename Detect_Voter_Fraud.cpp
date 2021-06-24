bool solve(vector<vector<int>>& votes) {
    int n = votes.size()-1;
    int required_sum = (n*(n+1))/2;
    int actual_sum = 0;
    for(int i = 0;i<votes.size();++i){
        actual_sum += votes[i][1];
    }
    if(actual_sum==required_sum) return false;
    return true;
    
}