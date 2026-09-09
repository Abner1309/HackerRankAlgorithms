string biggerIsGreater(string w) {
    std::string answer;
    std::string negative_answer = "no answer";
    int i, j;
    char mem;
    int first_index = -1;
    int second_index = -1;
    
    if (w.size() == 1) {
        return negative_answer;
    }
    
    i = w.size() - 2; j = w.size() - 1;
    while (i > -1 && first_index == -1) {
        if (w.at(i) < w.at(j)) { first_index = i; }        
        i--; j--;
    }
    
    if (first_index == -1) { return negative_answer; }
    
    i = w.size() - 1;
    while (i > -1 && second_index == -1) {
        if (w.at(first_index) < w.at(i)) { second_index = i; }
        i--;
    }
    
    mem = w.at(first_index);
    w[first_index] = w[second_index];
    w[second_index] = mem;
    
    for (int i = 0; i <= first_index; i++) { answer.push_back(w.at(i)); }
    for (int i = w.size() - 1; i > first_index; i--) { answer.push_back(w.at(i)); }
    
    return answer;
}
