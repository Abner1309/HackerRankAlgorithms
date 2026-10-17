string caesarCipher(string s, int k) {
    string answer;
    
    for (int i = 0, aux = 0; i < s.size(); i++) {
        aux = s[i];
        if (65 <= aux && aux <= 90) {
            aux += k;
            aux = ((aux - 65) % 26) + 65;
        }
        if (97 <= aux && aux <= 122) {
            aux += k;
            aux = ((aux - 97) % 26) + 97;
        }        
        answer.push_back(aux);
    }
    
    return answer;
}
