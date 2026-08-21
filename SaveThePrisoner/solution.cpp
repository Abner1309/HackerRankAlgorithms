int saveThePrisoner(int n, int m, int s) {
    int calc = (s - 1 + m - 1) % n + 1;
    return calc;
}
