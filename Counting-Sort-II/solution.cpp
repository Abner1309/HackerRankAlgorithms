vector<int> countingSort(vector<int> arr) {
    vector<int> frequency(100, 0);
    vector<int> answer;
    
    for (int i = 0; i < arr.size(); i++) {
        frequency[arr[i]]++;
    }
    
    for (int i = 0; i < 100; i++) {
        if (frequency[i] > 0) {
            answer.push_back(i);
            frequency[i]--;
            i--;
        }
    }
    
    return answer;
}
