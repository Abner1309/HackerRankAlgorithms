int sockMerchant(int n, vector<int> ar) {
    int quantity = 0;
    std::sort(ar.begin(), ar.end());
    for (int i = 0, j = 1; j < ar.size(); i++, j++) {
        if (ar[i] == ar[j]) { 
            quantity++;
            i++; j++;
        }
    }    
    return quantity;
}
