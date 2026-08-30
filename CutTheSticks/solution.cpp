vector<int> cutTheSticks(vector<int> arr) {
    std::vector<int> answer;
    
    int ref_value, number_quantity = arr.size();
    while (number_quantity > 0) {
        ref_value = std::numeric_limits<int>::max();
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > 0 && arr[i] < ref_value) { ref_value = arr[i]; }
        }
        answer.push_back(number_quantity);
        number_quantity = 0;
        for (int i = 0; i < arr.size(); i++) {
            arr[i] -= ref_value;
            if (arr[i] > 0) { number_quantity++; }
        }
    }
    
    return answer;
}
