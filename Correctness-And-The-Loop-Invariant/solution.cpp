int main() {
    int arr_len;
    cin >> arr_len;
    
    vector<int> arr;
    for (int i = 0, value; i < arr_len; i++) {
        cin >> value;
        arr.push_back(value);
    }
    
    for (int i = 1; i < arr_len; i++) {
        for (int j = i, mem; arr[j - 1] > arr[j] && j > 0; j--) {
            mem = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = mem;
        }
    }
    
    for (int i = 0; i < arr_len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
