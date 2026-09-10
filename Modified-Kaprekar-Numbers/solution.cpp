void kaprekarNumbers(int p, int q) {
    int qtd = 0;
    for (long i = p; i <= q; i++) {
        long square = i * i;
        std::string str_square = std::to_string(square);
        std::string str_i = std::to_string(i);
        
        int d = str_i.length();
        std::string str_right = str_square.substr(str_square.length() - d);
        std::string str_left = str_square.substr(0, str_square.length() - d);
        
        long n_left = str_left.empty() ? 0 : std::stol(str_left);
        long n_right = str_right.empty() ? 0 : std::stol(str_right);
        
        if (n_left + n_right == i) {
            std::cout << i << " ";
            qtd++;
        }
    }
    
    if (qtd == 0) {
        std::cout << "INVALID RANGE";
    }
    std::cout << std::endl;
}
