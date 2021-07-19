int solve(vector<int>& ratings) {
   vector<int> pay(ratings.size(), 1);
    for (int i = 1; i < ratings.size(); i++) {
        if (ratings[i] > ratings[i - 1]) pay[i] = pay[i - 1] + 1;
    }
    for (int i = ratings.size() - 2; i >= 0; i--) {
        if (ratings[i] > ratings[i + 1]) pay[i] = max(pay[i], pay[i + 1] + 1);
    }

    return accumulate(pay.begin(), pay.end(), 0);  
}
