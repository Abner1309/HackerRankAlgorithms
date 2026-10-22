string pangrams(string s) {
    vector<int> alphabet(26, 0);
    
    for (int i = 0; i < s.size(); i++) {
        if (65 <= s[i] && s[i] <= 90) { alphabet[s[i] - 65]++; }
        else if (97 <= s[i] && s[i] <= 122) { alphabet[s[i] - 97]++; }
        else { continue; }
    }
    
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] == 0) { return "not pangram"; }
    }
    
    return "pangram";
}
