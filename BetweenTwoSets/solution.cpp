int getTotalX(vector<int> a, vector<int> b) {
    int answer = 0;    
    bool success = true;
    for (int i = 1; i <= b[b.size() - 1]; i++) {
        for (int j = 0; j < a.size() && success; j++) {
            if (i % a[j] != 0) { success = false; }
        }
        for (int k = 0; k < b.size() && success; k++) {
            if (b[k] % i != 0) { success = false; }
        }
        if (success) { answer++; }
        else { success = true; }
    }    
    return answer;
}
