int nonDivisibleSubset(int k, vector<int> s) {
    vector<int> count(k, 0);
    for (int x : s) count[x % k]++;

    int result = (count[0] > 0) ? 1 : 0;

    for (int r = 1; r <= k / 2; r++) {
        if (r == k - r) {
            result += (count[r] > 0) ? 1 : 0;
        } else {
            result += max(count[r], count[k - r]);
        }
    }

    return result;
}
