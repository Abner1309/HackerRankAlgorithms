void helper(int n, int total) {
    for (int i = 0; i < total-n; i++) {
        std::cout << " ";
    }    
    for (int i = 0; i < n; i++) {
        std::cout << "#";
    }
    std::cout << std::endl;
}

void staircase(int n) {
    for (int i = 1; i <= n; i++) {
        helper(i, n);
    }
}
