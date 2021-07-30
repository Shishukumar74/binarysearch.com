class HitCounter {
    public:
    vector<int> v;
    HitCounter() {
    }

    void add(int timestamp) {
        v.push_back(timestamp);
    }

    int count(int timestamp) {
        return v.end() - lower_bound(v.begin(), v.end(), timestamp - 60);
    }
};