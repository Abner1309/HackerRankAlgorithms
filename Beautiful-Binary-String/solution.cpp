int beautifulBinaryString(string b) {
    int answer = 0;
    int hits = 0;
    string beautiful = "010";
    
    int p1 = 0, p2 = 0;
    while (p1 < b.size()) {
        if (b[p1] == beautiful[p2]) {
            hits++;
            p2 = (p2 + 1) % 3;
            if (hits == 3) { answer++; hits = 0; }
        }
        else {
            if (b[p1] == '0') { hits = 1; p2 = 1; }
            else { hits = 0; p2 = 0; }
        }
        p1++;
    }
    
    return answer;
}
