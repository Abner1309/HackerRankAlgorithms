int runningTime(vector<int> arr) {
    int answer = 0;
    
    int mem = 0;
    for (int i = 1; i < arr.size(); i++) {
        for (int j = i; arr[j-1] > arr[j] && j > 0; j--) {
            mem = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = mem;
            answer++;
        }
    }

    return answer;
}

