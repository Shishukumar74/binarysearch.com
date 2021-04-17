int solve(vector<int>& prices) {
    int profit = 0, answer = 0;
    int n = prices.size();
    for(int i = n-1;i>=0;--i){
        profit = max(profit, prices[i]);
        answer = max(answer, profit-prices[i]);
    }
    return answer;
    
}