int sum = 0;
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--) sum = (sum + i * arr[i] - (n - 1 - i) * arr[i]) % 1000000007;

    sum = (sum << 1) % 1000000007;
    return sum;