void swapValues(vector<int> &A, int value, int i, int j, int k) {
    int mem = 0;
    while (A[i] != value) {
        mem = A[i];
        A[i] = A[j];
        A[j] = A[k];
        A[k] = mem;
    }
}

string larrysArray(vector<int> A) {
    string answer_yes = "YES";
    string answer_no = "NO";

    int i = 0, j = 1, k = 2;
    int actual = 1;
    int start_point = 0;
    while (k < A.size()) {
        if (A[i] == actual || A[j] == actual || A[k] == actual) {
            swapValues(A, actual, i, j, k);
            if (i > start_point) { i--; j--; k--; }
            else {
                start_point++; actual++;
                i = start_point; j = i + 1; k = j + 1;
            }
        }
        else {
            i++; j++; k++;
        }
    }

    for (int a = 0, b = 1; b < A.size(); a++, b++) {
        if (A[b] < A[a]) { return answer_no; }
    }

    return answer_yes;
}
