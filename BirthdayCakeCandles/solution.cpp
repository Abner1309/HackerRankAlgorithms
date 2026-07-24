int birthdayCakeCandles(vector<int> candles) {
    int number_memory = std::numeric_limits<int>::min();
    int quantity = 0;    
    for (int i = 0; i < candles.size(); i++) {
        if (number_memory < candles[i]) {
            number_memory = candles[i];
            quantity = 1;
        }
        else if (number_memory > candles[i]) {
            continue;
        }
        else {
            quantity++;
        }
    }    
    return quantity;
}
