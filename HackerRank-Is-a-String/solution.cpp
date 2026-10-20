string hackerrankInString(string s) {
    string message = "hackerrank";
    int pm = 0;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == message[pm]) {
            pm++;
            if (pm == message.size()) { return "YES"; }
        }
    }
    
    return "NO";
}
