int solve(vector<int>& arr) {
 if (arr[0] > 1) {
        return 1;
    } else {
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i + 1] - arr[i] > 1) {
                return arr[i] + 1;
            }
        }
        return arr[arr.size() - 1] + 1;
    }
}