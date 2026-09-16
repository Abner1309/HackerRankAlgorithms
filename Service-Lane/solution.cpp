vector<int> serviceLane(const vector<int> &width, const vector<vector<int>> &cases) {
    std::vector<int> answer;
    
    int index_start = 0, index_end = 0, smaller = std::numeric_limits<int>::max();
    for (int i = 0; i < cases.size(); i++) {
        index_start = cases[i][0];
        index_end = cases[i][1];
        for (int j = index_start; j <= index_end; j++) {
            if (width[j] < smaller) { smaller = width[j]; }
        }
        answer.push_back(smaller);
        smaller = std::numeric_limits<int>::max();
    }
    
    return answer;
}
