class StockSpan {
    public:
    int idx = 0;
    stack<pair<int, int>> s;
    int next(int price) {
        while (!s.empty() and s.top().first <= price) s.pop();
        int ans = s.empty() ? idx : idx - s.top().second;
        s.push({price, ++idx});
        return ans + 1;
    }
};
