class RunLengthDecodedIterator {
  private:
    stringstream ss;
    uint64_t count = 0;
    uint64_t length = 0;
    char c;

    public:
    RunLengthDecodedIterator(string s) : ss(s) {
        length = ss.str().size();
    }

    string next() {
        if (!count) {
            ss >> count;
            ss >> c;
        }
        count--;
        return string(1, c);
    }

    bool hasnext() {
        return (count || ss.tellg() < length);
    }
};