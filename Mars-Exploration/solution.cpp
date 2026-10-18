int marsExploration(string s) {
    int answer = 0;
    string message = "SOS";
    
    for (int i = 0, j = 0; i < s.size(); i++, j = (j + 1) % 3) {
        if (s[i] != message[j]) { answer++; }
    }
    
    return answer;
}
