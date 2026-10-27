string funnyString(string s) {
    string rev;
    
    for (int i = s.size() - 1; i >= 0; i--) {
        rev.push_back(s[i]);
    }
    
    int calc1 = 0, calc2 = 0;
    for (int i = 0, j = 1; j < s.size(); i++, j++) {
        calc1 = abs(s[i] - s[j]);
        calc2 = abs(rev[i] - rev[j]);
        if (calc1 != calc2) { return "Not Funny"; }
    }

    return "Funny";
}
