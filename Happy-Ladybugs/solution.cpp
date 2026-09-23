string happyLadybugs(string b) {
    vector<int> frenquency(26, 0);
    string answer_yes = "YES";
    string answer_no = "NO";
    
    if (b.size() == 1 && b[0] != '_') { return answer_no; }
    if (b.size() == 1 && b[0] == '_') { return answer_yes; }
    
    bool exist_space = false;
    for (int i = 0; !exist_space && i < b.size(); i++) {
        if (b.at(i) == '_') {
            exist_space = true;
        }
    }
    
    if (!exist_space) {
        for (int i = -1, j = 0, k = 1; j < b.size(); i++, j++, k++) {
            if (j < 1) {
                if (b.at(j) != b.at(k)) {
                    return answer_no;
                }
                else {
                    continue;
                }                
            }
            else if (j > b.size() - 2) {
                if (b.at(i) != b.at(j)) {
                    return answer_no;
                }
                else {
                    continue;
                }
            }
            else {
                if (b.at(i) != b.at(j) && b.at(j) != b.at(k)) {
                    return answer_no;
                }
                else {
                    continue;
                }
            }            
        }
    }
    else {
        for (int i = 0; i < b.size(); i++) {
            if (b.at(i) != '_') { 
                frenquency[b.at(i) - 'A']++;
            }
        }
        for (int i = 0; i < frenquency.size(); i++) {
            if (frenquency[i] == 1) {
                return answer_no;
            }
        }
    }
    
    return answer_yes;
}
