int camelcase(string s) {
    int answer = 1;
    
    for (int i = 0; i < s.size(); i++) {
        if ('A' <= s[i] && s[i] <= 'Z') { answer++; }
    }
    
    return answer;
}
