vector<int> absolutePermutation(int n, int k) {
    vector<int> answer(n);
    
    if (k == 0) {
        for (int i = 0; i < n; i++) answer[i] = i + 1;
        return answer;
    }
    
    if (n % (2 * k) != 0) return {-1};
    
    for (int i = 1; i <= n; i += 2 * k) {
        for (int j = 0; j < k; j++) {
            answer[i + j - 1] = i + j + k; 
            answer[i + j + k - 1] = i + j;
        }
    }
    
    return answer;
}
