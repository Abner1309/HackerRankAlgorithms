void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    std::vector<int> apples_real;
    std::vector<int> oranges_real;
    
    for (int i = 0; i < apples.size(); i++) {
        apples_real.push_back(a + apples[i]);
    }    
    for (int i = 0; i < oranges.size(); i++) {
        oranges_real.push_back(b + oranges[i]);
    }
    
    int amount_apples = 0;
    for (int i = 0; i < apples_real.size(); i++) {
        if (s <= apples_real[i] && apples_real[i] <= t) { amount_apples++; }
    }
    std::cout << amount_apples << std::endl;
    
    int amount_oranges = 0;
    for (int i = 0; i < oranges_real.size(); i++) {
        if (s <= oranges_real[i] && oranges_real[i] <= t) { amount_oranges++; }
    }
    std::cout << amount_oranges << std::endl;
}
