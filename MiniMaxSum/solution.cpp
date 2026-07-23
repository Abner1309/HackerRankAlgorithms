void miniMaxSum(vector<int> arr) {
    long max_value = std::numeric_limits<long>::min();
    long min_value = std::numeric_limits<long>::max();
    long memory_value = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size(); j++) {
            if (j != i) { memory_value = memory_value + arr[j]; }
        }
        if (memory_value > max_value) { max_value = memory_value; }
        if (memory_value < min_value) { min_value = memory_value; }
        memory_value = 0;
    }
    
    std::cout << min_value << " " << max_value << std::endl;
}
