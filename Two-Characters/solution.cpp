int checkAlternate(string &s, char a1, char a2) {
    int maximum = 0;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == a1 && maximum % 2 == 0) { maximum++; continue; }
        if (s[i] == a1 && maximum % 2 == 1) { return 0; }
        if (s[i] == a2 && maximum % 2 == 1) { maximum++; continue; }
        if (s[i] == a2 && maximum % 2 == 0) { return 0; }
    }
    
    return maximum;
}

int alternate(string s) {
    int answer = 0;
    vector<int> frequency(26, 0);
    
    if (s.size() == 1) { return 0; }
    
    for (int i = 0; i < s.size(); i++) {
        frequency[s[i] - 'a']++;
    }
    
    int aux1 = 0, aux2 = 0;
    for (int i = 0; i < 26; i++) {
        for (int j = i + 1; j < 26; j++) {
            if (frequency[i] > 0 && frequency[j] > 0 &&
            (abs(frequency[i] - frequency[j]) <= 1)) {
                char c1 = 'a' + i;
                char c2 = 'a' + j;
                aux1 = checkAlternate(s, c1, c2);
                aux2 = checkAlternate(s, c2, c1);
                if (aux1 > answer) { answer = aux1; }
                if (aux2 > answer) { answer = aux2; }
            }
        }
    }
    
    return answer;
}
