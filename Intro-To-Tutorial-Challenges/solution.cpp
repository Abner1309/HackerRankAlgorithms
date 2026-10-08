int introTutorial(int V, vector<int> arr) {
    int p1 = 0, p2 = arr.size() - 1;
    int len;

    if (arr.size() == 1) { return 0; }

    while (p2 - p1 > 1) {
        len = (p1 + p2) / 2;
        
        if (V == arr[p1]) { return p1;}
        if (V == arr[len]) { return len; }        
        if (V == arr[p2]) { return p2; }
        
        if (V > arr[len]) { p1 = len; continue; }
        if (V < arr[len]) { p2 = len; continue; }        
    }

    return -1;
}
