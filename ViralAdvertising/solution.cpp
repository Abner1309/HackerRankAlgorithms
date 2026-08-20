int viralAdvertising(int n) {
    int shared = 5;
    int liked = 0;
    int cumulative = 0;
    for (int i = 0; i < n; i++) {
        liked = std::floor(shared / 2);
        cumulative += liked;
        shared = liked * 3;        
    }
    return cumulative;
}
