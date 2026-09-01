long repeatedString(string s, long n) {
    long str_len = s.size();
    
    long quantity_a = 0;
    for (long i = 0; i < str_len; i++) {
        if (s.at(i) == 'a') { quantity_a++; }
    }
    
    long division = n / str_len;
    long rest = n % str_len;
    
    long total_a = division * quantity_a;
    for (long i = 0; i < rest; i++) {
        if (s.at(i) == 'a') { total_a++; }
    }
    
    return total_a;
}
