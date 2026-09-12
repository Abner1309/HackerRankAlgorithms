int minimumDistances(vector<int> a) {
    int answer = std::numeric_limits<int>::max(), aux = 0;
    
    for (int i = 0; i < a.size(); i++) {
        for (int j = i + 1; j < a.size(); j++) {
            if (a[i] == a[j]) {
                aux = std::abs(i - j);
                if (aux < answer) { answer = aux; }
                break;
            }
        }
    }
    
    if (answer == std::numeric_limits<int>::max()) { return -1; }    
    return answer;
}
