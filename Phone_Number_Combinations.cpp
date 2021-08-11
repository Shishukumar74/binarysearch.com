vector<string> keypad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

vector<string> solve(string digits) {
    if (digits.empty()) return {""};
    vector<string> answers;
    for (auto first : keypad[digits[0] - '0']) {
        for (auto rest : solve(digits.substr(1))) {
            answers.push_back(first + rest);
        }
    }
    return answers;
}