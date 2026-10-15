void printArray(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort2(int n, vector<int> arr) {
    if (arr.size() == 1) { printArray(arr); return; }
    
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i - 1] > arr[i]) {
            for (int j = i, mem = 0; j > 0 && arr[j - 1] > arr[j]; j--) {
                mem = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = mem;
            }
        }
        printArray(arr);
    }
}
