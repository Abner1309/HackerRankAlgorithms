vector<int> acmTeam(vector<string> topic) {
    std::vector<int> answer(2, 0);
    int maximum = 0;
    int count = 0;

    for (int i = 0; i < topic.size(); i++) {
        for (int j = i + 1; j < topic.size(); j++) {
            int aux = 0;
            for (int k = 0; k < topic[0].size(); k++) {
                if (topic[i].at(k) == '1' || topic[j].at(k) == '1') { aux++; }
            }
            if (aux > maximum) {
                maximum = aux;
                count = 1;
            } else if (aux == maximum) {
                count++;
            }
        }
    }

    answer[0] = maximum;
    answer[1] = count;
    return answer;
}
