int squares(int a, int b) {
    int start_number = (int) std::ceil(std::sqrt(a));
    int end_number = (int) std::floor(std::sqrt(b));
    int calc = end_number - start_number + 1;
    return calc;
}
