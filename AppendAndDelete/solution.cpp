string appendAndDelete(string s, string t, int k) {
    std::string answer_yes = "Yes";
    std::string answer_no = "No";
    
    int bigger, smaller;
    if (s.size() >= t.size()) { bigger = s.size(); smaller = t.size(); }
    else { bigger = t.size(); smaller = s.size(); }
    
    int diff_quantity = bigger - smaller;
    int diff_letter = smaller;
    for (int i = 0; i < smaller; i++) {
        if (s.at(i) != t.at(i)) { break; }
        diff_letter--;
    }
    int diff_final = diff_quantity + (2 * diff_letter);
    int result = k - diff_final;
    
    if (result < 0) { return answer_no; }
    if (result % 2 == 0 || k >= bigger + smaller) { return answer_yes; }
    return answer_no;
}
