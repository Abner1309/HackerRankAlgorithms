bool verifyPattern(const vector<string> &G, const vector<string> &P, int index_rows, int index_cols) {
    for (int i = index_rows; i < P.size() + index_rows; i++) {
        if (i >= G.size()) { return false; }
        for (int j = index_cols; j < P[0].size() + index_cols; j++) {
            if (j >= G[0].size()) { return false; }
            if (G[i].at(j) != P[i - index_rows].at(j - index_cols)) { return false; }
        }
    }    
    return true;
}
 
string gridSearch(vector<string> G, vector<string> P) {
    string answer_yes = "YES";
    string answer_no = "NO";
    
    for (int i = 0; i < G.size(); i++) {
        for (int j = 0; j < G[0].size(); j++) {
            if (G[i].at(j) == P[0].at(0) && verifyPattern(G, P, i, j)) { return answer_yes; }
        }
    }
    
    return answer_no;
}
