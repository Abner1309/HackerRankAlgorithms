 void printArray(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
 }

void insertionSort1(int n, vector<int> arr) {
    int pl = arr.size() - 2;
    int pr = arr.size() - 1;
    int number = arr[arr.size() - 1];
    
    while (pl > -1) {
        if (arr[pl] > number) {
            arr[pr] = arr[pl];
            printArray(arr);
        }
        else {
            arr[pr] = number;
            printArray(arr);
            return;
        }        
        pl--; pr--;
    }
    arr[pr] = number;
    printArray(arr);
}
