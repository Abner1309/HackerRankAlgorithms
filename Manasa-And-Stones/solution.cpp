vector<int> stones(int n, int a, int b) {
    if (a > b) swap(a, b);           
    
    vector<int> answer;
    if (a == b) {                    
        answer.push_back((n - 1) * a);
        return answer;
    }
    
    for (int k = 0; k < n; k++) {    
        answer.push_back((n - 1 - k) * a + k * b);
    }
    return answer;
}
