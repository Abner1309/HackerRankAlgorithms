int armMax(const vector<string> &grid, int row, int col) {
    int arm = 0;
    while (row - arm - 1 >= 0 && row + arm + 1 < (int)grid.size() &&
           col - arm - 1 >= 0 && col + arm + 1 < (int)grid[0].size() &&
           grid[row - arm - 1][col] == 'G' &&
           grid[row + arm + 1][col] == 'G' &&
           grid[row][col - arm - 1] == 'G' &&
           grid[row][col + arm + 1] == 'G') {
        arm++;
    }
    return arm;
}

bool intersects(int r1, int c1, int a1, int r2, int c2, int a2) {
    if (r1 == r2 && c1 == c2) return true; // same center

    auto cellsOf = [](int r, int c, int a) {
        vector<pair<int,int>> cells;
        cells.push_back({r, c});
        for (int k = 1; k <= a; k++) {
            cells.push_back({r - k, c});
            cells.push_back({r + k, c});
            cells.push_back({r, c - k});
            cells.push_back({r, c + k});
        }
        return cells;
    };

    auto cells1 = cellsOf(r1, c1, a1);
    auto cells2 = cellsOf(r2, c2, a2);

    for (auto &p1 : cells1)
        for (auto &p2 : cells2)
            if (p1 == p2) return true;

    return false;
}

int twoPluses(vector<string> grid) {
    int rows = grid.size(), cols = grid[0].size();

    struct Plus { int r, c, a; };
    vector<Plus> pluses;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 'G') {
                int maxArm = armMax(grid, i, j);
                for (int a = 0; a <= maxArm; a++) {
                    pluses.push_back({i, j, a});
                }
            }
        }
    }

    int answer = 0;
    int n = pluses.size();

    for (int i = 0; i < n; i++) {
        int area1 = 4 * pluses[i].a + 1;
        for (int j = 0; j < n; j++) {
            int area2 = 4 * pluses[j].a + 1;
            if (area1 * area2 <= answer) continue;

            if (!intersects(pluses[i].r, pluses[i].c, pluses[i].a,
                             pluses[j].r, pluses[j].c, pluses[j].a)) {
                answer = max(answer, area1 * area2);
            }
        }
    }

    return answer;
}
