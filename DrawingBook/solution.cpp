int pageCount(int n, int p) {
    int left_pages = p / 2;
    int right_pages = 0;
    
    if (n % 2 == 0) { right_pages = (n - p + 1) / 2; }
    else { right_pages = (n - p) / 2; }    
    
    if (left_pages < right_pages) { return left_pages; }
    return right_pages;
}
