string angryProfessor(int k, vector<int> a) {
    int students = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] <= 0) { students++; }
    }
    if (students >= k) { return "NO"; }
    return "YES";    
}
