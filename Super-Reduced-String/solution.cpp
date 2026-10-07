string superReducedString(string s) {
    string answer;
    int p1 = 0, p2 = 1;
    int start = 0;
    
    while (p2 < s.size()) {
        if (s[p1] == ' ' && s[p2] == ' ') { p1++; p2++; continue; }
        else if (s[p1] == ' ') { p1++; continue; }
        if (s[p2] == ' ') { p2++; continue; }
        
        if (s[p1] == s[p2]) {
            s[p1] = ' '; s[p2] = ' ';
            if (start == p1) { start = p2 + 1; }
            p1 = start; p2 = p1 + 1;
        }
        else {
            p1++; p2++;    
        }        
    }
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') { answer.push_back(s[i]); }
    }
    
    if (answer.size() == 0) { return "Empty String"; }
    
    return answer;
}
