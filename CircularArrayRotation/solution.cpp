vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    std::vector<int> answer;
    std::vector<int> aux(a.size(), 0);    
    
    int calc = k % a.size();
    if (calc == 0) { calc = a.size(); }
    for (int i = 0; i < a.size(); i++) {        
        aux[i] = a[(i + a.size() - calc) % a.size()];
    }
    
    for (int i = 0; i < queries.size(); i++) {
        answer.push_back(aux[queries[i]]);
    }
    
    return answer;
}
