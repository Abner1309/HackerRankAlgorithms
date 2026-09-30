void almostSorted(vector<int> arr) {
    int n = arr.size();
    vector<int> s = arr;
    sort(s.begin(), s.end());

    int l = 0, r = n - 1;
    while (l < n && arr[l] == s[l]) l++;
    if (l == n) {
        return;
    }
    while (arr[r] == s[r]) r--;

    // tenta swap
    swap(arr[l], arr[r]);
    if (arr == s) {
        cout << "yes\nswap " << l + 1 << " " << r + 1 << "\n";
        return;
    }
    swap(arr[l], arr[r]);               // desfaz

    // tenta reverse
    reverse(arr.begin() + l, arr.begin() + r + 1);
    if (arr == s) {
        cout << "yes\nreverse " << l + 1 << " " << r + 1 << "\n";
        return;
    }

    cout << "no\n";
}
