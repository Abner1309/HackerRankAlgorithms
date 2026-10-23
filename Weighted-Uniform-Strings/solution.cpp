vector<string> weightedUniformStrings(string s, vector<int> queries) {
    vector<string> answer;
    vector<int> numbers;
    
    // O(n)
    char character = '?';
    int value = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == character) { value += s[i] - 96; }
        else { value = s[i] - 96; }
        numbers.push_back(value);
        character = s[i];
    }
    
    // O(nlogn)
    sort(numbers.begin(), numbers.end());
    
    // O(nlogn)
    for (int i = 0; i < queries.size(); i++) {
        if (binary_search(numbers.begin(), numbers.end(), queries[i])) {
            answer.push_back("Yes");
        }
        else { answer.push_back("No"); }
    }
    
    return answer;
}
