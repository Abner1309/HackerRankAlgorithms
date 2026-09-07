string organizingContainers(vector<vector<int>> container) {
    std::string positive_answer = "Possible";
    std::string negative_answer = "Impossible";
    
    std::vector<int> rows_sum(container.size(), 0);
    std::vector<int> cols_sum(container.size(), 0);
    
    for (int i = 0; i < container.size(); i++) {
        for (int j = 0; j < container.size(); j++) {
            rows_sum[i] += container[i][j];
            cols_sum[i] += container[j][i];
        }
    }
    
    sort(rows_sum.begin(), rows_sum.end());
    sort(cols_sum.begin(), cols_sum.end());
    
    for (int i = 0; i < container.size(); i++) {
        if (rows_sum[i] != cols_sum[i]) { return negative_answer; }
    }
    
    return positive_answer;
}
