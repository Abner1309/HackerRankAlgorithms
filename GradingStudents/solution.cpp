vector<int> gradingStudents(vector<int> grades) {
    std::vector<int> answer;
    
    for (int i = 0, div = 0, aux = 0; i < grades.size(); i++) {
        if (grades[i] < 38) {
            answer.push_back(grades[i]);
        }
        else {
            div = (grades[i] / 5) + 1;
            aux = (5 * div) - grades[i];
            if (aux < 3) {
                answer.push_back(5 * div);
            }
            else {
                answer.push_back(grades[i]);
            }
        }
    }
    
    return answer;
}
