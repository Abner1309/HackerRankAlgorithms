string kangaroo(int x1, int v1, int x2, int v2) {    
    std::string answer_yes = "YES";
    std::string answer_no = "NO";    
    if (v1 == v2 && x1 == x2) { return answer_yes; }
    if (v1 == v2 && x1 != x2) { return answer_no; }    
    int pos_kangaroo1 = x1;
    int pos_kangaroo2 = x2;
    int possible = true;
    while (possible) {        
        pos_kangaroo1 += v1;
        pos_kangaroo2 += v2;
        if (pos_kangaroo1 == pos_kangaroo2) { return answer_yes; }
        if ((v1 > v2 && pos_kangaroo1 > pos_kangaroo2) || (v1 < v2  && pos_kangaroo1 < pos_kangaroo2)) { possible = false; }
    }    
    return answer_no;
}
