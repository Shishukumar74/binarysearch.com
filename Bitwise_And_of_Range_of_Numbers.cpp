int solve(int start, int end) {
    int cnt = 0;
    while (start != end) {
        start = start >> 1;
        end = end >> 1;
        cnt += 1;
    }
    return start << cnt;

}