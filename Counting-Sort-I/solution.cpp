vector<int> countingSort(vector<int> arr) {
    vector<int> frequency(100, 0);
    
    for (int i = 0; i < arr.size(); i++) {
        frequency[arr[i]] += 1;
    }
    
    return frequency;
}
