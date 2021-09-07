class RateLimiter {
    int expire;
    unordered_map<int, int> mp;

    public:
    RateLimiter(int expire) {
        this->expire = expire;
    }

    bool limit(int uid, int timestamp) {
        if (mp.count(uid)) {
            if (mp[uid] + expire > timestamp) return true;
        }
        mp[uid] = timestamp;
        return false;
    }
};