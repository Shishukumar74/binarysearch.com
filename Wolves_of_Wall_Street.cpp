int solve(vector<int>& prices) {
    int n = prices.size();
    int sum = 0;
    for(int i=1;i<n;i++){
        if(prices[i]>prices[i-1]){
            sum = sum+(prices[i]-prices[i-1]);
        }
    }
    return sum;
    
}