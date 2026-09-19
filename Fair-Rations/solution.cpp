string fairRations(vector<int> B) {
    string answer;
    string impossible = "NO";
    
    int number_even = 0;    
    for (int i = 0; i < B.size(); i++) {
        if (B[i] % 2 != 0) { number_even++; }
    }    
    if (number_even % 2 != 0) { return impossible; }
    
    int bread = 0;
    for (int i = 0, j = 1; j < B.size() && number_even > 0; i++, j++) {
        if (B[i] % 2 != 0) { 
            B[i]++; B[j]++; bread += 2;
        }
    }
    answer = to_string(bread);
    
    return answer;
}
