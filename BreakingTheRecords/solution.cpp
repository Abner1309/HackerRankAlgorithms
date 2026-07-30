vector<int> breakingRecords(vector<int> scores) {
    std::vector<int> answer = {0, 0};
    std::vector<int> memory = {scores[0], scores[0]};
    
    for (int i = 1; i < scores.size(); i++) {
        if (scores[i] > memory[0]) { memory[0] = scores[i]; answer[0]++; }
        if (scores[i] < memory[1]) { memory[1] = scores[i]; answer[1]++; } 
    }
    
    return answer;
}
