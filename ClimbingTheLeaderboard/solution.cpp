vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    ranked.erase(unique(ranked.begin(), ranked.end()), ranked.end());
    
    int idx = ranked.size();
    vector<int> result;
    result.reserve(player.size());
    
    for (int score : player) {
        while (idx > 0 && ranked[idx - 1] <= score) {
            idx--;
        }
        result.push_back(idx + 1);
    }
    
    return result;  
}
