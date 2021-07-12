int solve(vector<string>& ops) {
    int result = 0;
    stack<int> st;
    for (string x : ops) {
        char ch = x[0];
        if (ch == '+' || ch == '-') {
            if (st.size() < 2) return -1;
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if (ch == '+')
                st.push(a + b);
            else
                st.push(a - b);
        } else if (ch == 'D' || ch == 'P') {
            if (st.empty()) return -1;
            if (ch == 'D')
                st.push(st.top());
            else
                st.pop();
        } else {
            st.push(stoi(x));
        }
    }
    return (!st.empty() ? st.top() : -1);
    
}