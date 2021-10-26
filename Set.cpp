class CustomSet {
    vector<int> root;

    public:
    CustomSet() {
    }

    void add(int val) {
        if (binary_search(root.begin(), root.end(), val)) return;
        auto itr = lower_bound(root.begin(), root.end(), val);
        root.insert(itr, val);
    }

    bool exists(int val) {
        return binary_search(root.begin(), root.end(), val);
    }

    void remove(int val) {
        if (!binary_search(root.begin(), root.end(), val)) return;
        auto itr = lower_bound(root.begin(), root.end(), val);
        root.erase(itr);
    }
};