int beautifulTriplets(int d, vector<int> arr) {
    unordered_map<int, int> freq;
    for (int x : arr) freq[x]++;

    long answer = 0;
    for (auto& [value, count] : freq) {
        if (freq.count(value - d) && freq.count(value + d)) {
            answer += (long)freq[value - d] * count * freq[value + d];
        }
    }

    return (int)answer;
}
