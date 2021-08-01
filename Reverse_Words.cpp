string solve(string sentence) {
    if(sentence=="") return sentence;
    stringstream ss(sentence);
    string result, word;
    while (ss >> word) result = word + " " + result;
    if (result.size() > 1) result.pop_back();
    return result;
}
