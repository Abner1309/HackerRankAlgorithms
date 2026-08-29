int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    int fee_day = 15, fee_month = 500, fee_year = 10000;    
    
    if (y1 > y2) { return fee_year; }
    if (y1 < y2) { return 0; }
    if (m1 > m2) { return fee_month * (m1 - m2); }
    if (m1 < m2) { return 0; }
    if (d1 <= d2) { return 0; }
    
    return fee_day * (d1 - d2);
}
