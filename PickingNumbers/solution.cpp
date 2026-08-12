int pickingNumbers(vector<int> a) {
    int freq[101] = {0};

    for (int num : a) {
        freq[num]++;
    }

    int max_count = 0;
    for (int v = 0; v < 100; v++) {
        max_count = max(max_count, freq[v] + freq[v + 1]);
    }

    return max_count;
}
