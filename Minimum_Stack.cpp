class MinimumStack {
    stack<int>st, mn;
    public:
    MinimumStack() {

 }
    void append(int val) {
        st.push(val);
        if(mn.empty() || mn.top()>=val) mn.push(val);
    }
    int peek() {
        return st.top();
    }
    int min() {
        return mn.top();
    }

    int pop() {
        if(mn.top()==st.top()) mn.pop();
        int x = st.top();
        st.pop();
        return x;
    }
};