int theLoveLetterMystery(string s) {
    int answer = 0;
    for (int i = 0, j = s.size()-1; i < j; i++, j--) {
        if (s[i] == s[j]) { continue; }
        else {
            if (s[i] < s[j]) { answer += s[j] - s[i]; }
            else { answer += s[i] - s[j]; }
        }
    }
    
    return answer;
}
