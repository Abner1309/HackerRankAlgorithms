vector<int> permutationEquation(vector<int> p) {
    std::vector<int> answer(p.size(), 0);    
    std::vector<int> aux(p.size(), 0);
    
    for (int i = 0; i < p.size(); i++) {
        aux[p[i] - 1] = i + 1;
    }
    
    for (int i = 0; i < p.size(); i++) {
        answer[i] = aux[aux[i] - 1];
    }
    
    return answer;
}
