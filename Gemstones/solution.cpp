int gemstones(vector<string> arr) {
    int answer = 0;
    vector<int> stones(26, 0);
    unordered_set<int> aux;
    
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            aux.insert(arr[i][j] - 97);
        }
        for (int j = 0; j < 26; j++) {
            if (aux.find(j) != aux.end()) {
                stones[j]++;
            }
        }
        aux.clear();
    }
    
    for (int i = 0; i < 26; i++) {
        if (stones[i] == arr.size()) { answer++; }
    }
    
    return answer;
}
