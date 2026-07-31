int birthday(vector<int> s, int d, int m) {
    int pieces = 0;
    
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < i + m; j++) {
            sum += s[j];
        }
        if (sum == d) { pieces++; }
        sum = 0;
    }
    
    return pieces;
}
