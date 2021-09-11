int solve(int n, int total, int k) {
   long long t = total, nn = n, kk = k;
   return (2 * t + kk * (kk + 1) + (nn - kk - 2) * (nn - kk - 1) + 2 * (nn - kk - 1)) / (2 * nn);
}