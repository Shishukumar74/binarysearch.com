int solve(vector<vector<string>>& contacts) {
    int len = contacts.size();
    map<string, int> mp;
    int ans = 0;
    for (int i = 0; i < len; i++) {
        int flag = 0;
        for (int j = 0; j < contacts[i].size(); j++) {
            if (mp[contacts[i][j]] > 0) {
                flag = 1;
            } else
                mp[contacts[i][j]]++;
        }
        if (flag == 0) ans++;
    }
    return ans;
}