int diagonalDifference(vector<vector<int>> arr) {
    int len = arr[0].size();
    int matrix1 = 0;
    int matrix2 = 0;
    int answer = 0;
    
    for (int i = 0; i < len; i++) {
        matrix1 = matrix1 + arr[i][i];
    }
    
    for (int a = 0, b = len - 1; a < len; a++, b--) {
        matrix2 = matrix2 + arr[a][b];
    }
    
    answer = std::abs(matrix1 - matrix2);
    return answer;
}
