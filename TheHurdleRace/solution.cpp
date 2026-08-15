int hurdleRace(int k, vector<int> height) {
    int answer = 0;
    int max_value = *std::max_element(height.begin(), height.end());
    if (max_value > k) { answer = max_value - k; }
    return answer;
}
