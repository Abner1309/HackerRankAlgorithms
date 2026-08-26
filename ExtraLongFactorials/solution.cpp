vector<int> multiply(vector<int>& num, int x) {
    vector<int> result;
    int carry = 0;
    for (int digit : num) {
        int prod = digit * x + carry;
        result.push_back(prod % 10);
        carry = prod / 10;
    }
    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
    return result;
}

void extraLongFactorials(int n) {
    vector<int> result = {1};
    
    for (int i = 2; i <= n; i++) {
        result = multiply(result, i);
    }

    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }
    
    cout << endl;
}
