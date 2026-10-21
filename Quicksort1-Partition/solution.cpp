vector<int> quickSort(vector<int> arr) {
    vector<int> left;
    vector<int> equal;
    vector<int> right;
    
    equal.push_back(arr[0]);
    
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < equal[0]) {
            left.push_back(arr[i]);
        }
        else if (arr[i] > equal[0]) {
            right.push_back(arr[i]);
        }
        else {
            equal.push_back(arr[i]);
        }
    }
    
    vector<int> answer;
    
    for (int i = 0; i < left.size(); i++) { answer.push_back(left[i]); }
    for (int i = 0; i < equal.size(); i++) { answer.push_back(equal[i]); }
    for (int i = 0; i < right.size(); i++) { answer.push_back(right[i]); }
    
    return answer;
}
