int solve(vector<int>& seats) {
    int ans = 1, last = -1;
    for (int i = 0; i < seats.size(); ++i) {
        if (seats[i] == 1) {
            if (last == -1)
                ans = max(ans, i);
            else
                ans = max(ans, (i - last) / 2);
            last = i;
        }
    }
    ans = max(ans, (int)seats.size() - last - 1);
    return ans;
}

