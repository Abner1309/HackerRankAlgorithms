// [O(n * log(n))]
int findMedian(vector<int> arr) {
    // [O(n * log(n))] Sort The Array:
    sort(arr.begin(), arr.end());
    // [O(1)] Return The Median:
    return arr[arr.size() / 2];
}
