int alternatingCharacters(string s) {
    int answer = 0;
    
    for (int i = 1; i < s.size(); i++) {
        if (s[i - 1] == s[i]) {
            s[i - 1] = ' '; answer++;
        }
    }
    
    return answer;
}
