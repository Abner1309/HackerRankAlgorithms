vector<int> compareTriplets(vector<int> a, vector<int> b) {
    std::vector<int> answer = {0,0};
    
    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) { answer[0]++; }
        else if (a[i] < b[i]) { answer[1]++; }
        else { continue; }
    }
    
    return answer;
}
