vector<int> closestNumbers(vector<int> arr) {
    sort(arr.begin(), arr.end());
    
    int smallest = numeric_limits<int>::max();
    vector<int> diff_arr;   
    for (int i = 0, j = 1, aux; j < arr.size(); i++, j++) {
        aux = abs(arr[i] - arr[j]);
        diff_arr.push_back(aux);
        if (aux < smallest) { smallest = aux; }
    }
    
    vector<int> answer;
    for (int i = 0; i < diff_arr.size(); i++) {
        if (diff_arr[i] == smallest) {
            answer.push_back(arr[i]);
            answer.push_back(arr[i+1]);
        }
    }
    
    return answer;    
}
