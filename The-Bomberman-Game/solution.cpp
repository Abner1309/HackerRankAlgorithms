void explosion(vector<string> &grid, int row, int col) {
    // Cell Explosion:
    grid[row][col] = '.';
    
    // Rows Explosion:
    if (grid.size() > 1) {
        if (row < 1) {
            grid[row+1][col] = '.';
        }
        else if (row > grid.size() - 2) {
            grid[row-1][col] = '.';
        }
        else {
            grid[row-1][col] = '.';
            grid[row+1][col] = '.';
        }
    }

    // Columns Explosion:
    if (grid[0].size() > 1) {
        if (col < 1) {
            grid[row][col+1] = '.';
        }
        else if (col > grid[0].size() - 2) {
            grid[row][col-1] = '.';
        }
        else {
            grid[row][col-1] = '.';
            grid[row][col+1] = '.';
        }
    }
}

vector<string> bomberMan(int n, vector<string> grid) {
    vector<string> pattern_grid_one;
    vector<string> pattern_grid_two;
    vector<string> pattern_grid_three;
    vector<string> pattern_grid_four;

    // First Pattern:
    for (int i = 0; i < grid.size(); i++) {
        pattern_grid_one.push_back(grid[i]);
    }

    // Second Pattern:
    for (int i = 0; i < grid.size(); i++) {
        pattern_grid_two.push_back("");
        for (int j = 0; j < grid[0].size(); j++) {
            pattern_grid_two[i].append("O");
        }
    }

    // Third Pattern:
    for (int i = 0; i < grid.size(); i++) {
        pattern_grid_three.push_back(pattern_grid_two[i]);
    }
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (pattern_grid_one[i].at(j) == 'O') {
                 explosion(pattern_grid_three, i, j);
            }
        }
    }

    // Fourth Pattern:
    for (int i = 0; i < grid.size(); i++) {
        pattern_grid_four.push_back(pattern_grid_two[i]);
    }
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (pattern_grid_three[i].at(j) == 'O') {
                 explosion(pattern_grid_four, i, j);
            }
        }
    }

    // Pattern Calculus:
    int parity = n % 2;
    if (parity != 0) {
        if (n < 3) { return pattern_grid_one; }
        if (((n - 1) % 4) != 0) { return pattern_grid_three; }
        else { return pattern_grid_four; }
    }
    return pattern_grid_two;
}
