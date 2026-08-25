int findDigits(int n) {
    int quantity = 0;
    
    for (int i = n, digit = 0; i > 0; i = i / 10) {
        digit = i % 10;
        if (digit != 0 && n % digit == 0) { quantity++; }
    }
    
    return quantity;
}
