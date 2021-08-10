class BooleanArray {
    public:
    bool test = false;
    map<int, bool> mp;
    BooleanArray() {
    }

    void setTrue(int i) {
        mp[i] = true;
    }

    void setFalse(int i) {
        mp[i] = false;
    }

    void setAllTrue() {
        mp.clear();
        test = true;
    }

    void setAllFalse() {
        mp.clear();
        test = false;
    }

    bool getValue(int i) {
        return (mp.count(i)) ? mp[i] : test;
    }
};