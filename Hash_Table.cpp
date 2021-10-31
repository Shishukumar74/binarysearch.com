class HashTable {
    public:
    vector<vector<pair<int, int>>> m;
    HashTable() {
        m = vector<vector<pair<int, int>>>(1000);
    }

    void put(int key, int val) {
        if (m[key % 1000].size() == 0) m[key % 1000].push_back({key, val});
        for (auto &i : m[key % 1000]) {
            if (i.first == key) {
                i.second = val;
                return;
            }
        }
        m[key % 1000].push_back({key, val});
    }

    int get(int key) {
        if (m[key % 1000].size() == 0) return -1;
        vector<pair<int, int>> l = m[key % 1000];
        for (auto i : l) {
            if (i.first == key) return i.second;
        }
        return -1;
    }

    void remove(int key) {
        for (auto &i : m[key % 1000]) {
            if (i.first == key) {
                i.second = -1;
                return;
            }
        }
    }
};