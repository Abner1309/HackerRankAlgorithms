vector<string> cavityMap(vector<string> grid) {
    vector<string> answer = grid; 
    int n = grid.size();

    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < (int)grid[i].size() - 1; j++) {
            char c = grid[i][j];
            if (c > grid[i-1][j] && c > grid[i+1][j] &&
                c > grid[i][j-1] && c > grid[i][j+1]) {
                answer[i][j] = 'X';
            }
        }
    }

    return answer;
}
