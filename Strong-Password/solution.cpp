int minimumNumber(int n, string password) {
    int qtd_false = 4;
    bool one_digit = false, one_special = false;
    bool one_upper = false, one_lower = false;
    
    for (int i = 0; i < password.size(); i++) {
        if (password[i] >= 'A' && password[i] <= 'Z') { one_upper = true; }
        else if (password[i] >= 'a' && password[i] <= 'z') { one_lower = true; }
        else if (password[i] >= '0' && password[i] <= '9') { one_digit = true; }
        else { one_special = true; }
    }
    if (one_digit) { qtd_false--; }
    if (one_special) { qtd_false--; }
    if (one_upper) { qtd_false--; }
    if (one_lower) { qtd_false--; }
    
    int total = password.size() + qtd_false;
    int diff = 6 - total;
    int answer = (diff > 0) ? diff + qtd_false : qtd_false;
    
    return answer;
}
