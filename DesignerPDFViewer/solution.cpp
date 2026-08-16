int designerPdfViewer(vector<int> h, string word) {
    int answer = 1;
    int biggest = 0;
    for (int i = 0; i < word.size(); i++) {
        int calc = word.at(i) - 97;
        int height = h.at(calc);
        if (height > biggest) { biggest = height; }
    }
    answer *= biggest * word.size();
    return answer;
}
