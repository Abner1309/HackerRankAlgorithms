string encryption(string s) {
    std::string answer;    
    s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
    
    int str_len = s.size();    
    int rows = std::floor(std::sqrt(str_len));
    int cols = std::ceil(std::sqrt(str_len));
    if (rows * cols < str_len) {
        rows++;
    }    
    
    std::vector<std::string> matrix(rows, std::string(cols, ' '));
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = ' ';
        }
    }
    
    for (int i = 0; i < str_len; i++) {
        matrix[i / cols][i % cols] = s.at(i);
    }
    
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            if (matrix[j][i] != ' ') { answer.push_back(matrix[j][i]); }            
        }
        answer.push_back(' ');
    }
    answer.pop_back();
    
    return answer;
}
