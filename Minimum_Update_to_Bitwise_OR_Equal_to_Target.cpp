int solve(int a, int b, int target) {
    int res = 0;
    for (int i = 0; i < 32; ++i) {
        int mask = 1 << i;
        if (target & mask) {
            if ((a & mask) || (b & mask)) continue;
            res++;
        } else {
            if (a & mask) res++;
            if (b & mask) res++;
        }
    }
    return res;
}