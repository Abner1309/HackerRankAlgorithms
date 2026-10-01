void matrixRotation(vector<vector<int>> matrix, int r) {
    int m = matrix.size(), n = matrix[0].size();
    int layers = min(m, n) / 2;
    vector<vector<int>> ans = matrix;

    for (int k = 0; k < layers; k++) {
        int top = k, left = k, bottom = m - 1 - k, right = n - 1 - k;

        vector<pair<int,int>> pos;
        for (int i = top; i < bottom; i++)  pos.push_back({i, left});
        for (int j = left; j < right; j++)  pos.push_back({bottom, j});
        for (int i = bottom; i > top; i--)  pos.push_back({i, right});
        for (int j = right; j > left; j--)  pos.push_back({top, j});

        int len = pos.size();
        int shift = r % len;

        for (int idx = 0; idx < len; idx++) {
            auto [x1, y1] = pos[idx];
            auto [x2, y2] = pos[(idx + shift) % len];
            ans[x2][y2] = matrix[x1][y1];
        }
    }

    for (auto &row : ans) {
        for (int v : row) cout << v << " ";
        cout << "\n";
    }
}
