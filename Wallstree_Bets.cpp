vector<int> solve(vector<int>& prices) {
    stack<int> s;
    vector<int> ans(prices.size(),0);
    for( int i = prices.size() -1 ; i >= 0; i--) {
        while(!s.empty() and prices[s.top()] <= prices[i]) s.pop();
        ans[i] = s.empty() ? 0 : s.top() - i; 
        s.push(i);
    }
    return ans;
}