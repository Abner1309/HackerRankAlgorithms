int equalizeArray(vector<int> arr) {
    int answer = 0;
    std::vector<int> frequency(100, 0);
    
    for (int i = 0; i < arr.size(); i++) {
        frequency[arr[i] - 1]++;
    }
    
    int most_frequent_number = -1;
    for (int i = 0, aux = -1; i < 100; i++) {
        if (frequency[i] > aux) { most_frequent_number = i + 1; aux = frequency[i]; }
    }
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != most_frequent_number) { answer++; }
    }
    
    return answer;
}
