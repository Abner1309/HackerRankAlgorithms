int beautifulDays(int i, int j, int k) {
    int beautiful_quantity = 0;
    for (int a = i; a <= j; a++) {
        std::string str_number = std::to_string(a);
        std::string str_reverse_number(str_number.rbegin(), str_number.rend());
        int reverse_number = std::stoi(str_reverse_number);
        int calc = std::abs(a - reverse_number);
        if (calc % k == 0) { beautiful_quantity++; }
    }
    return beautiful_quantity;
}
