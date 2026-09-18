int flatlandSpaceStations(int n, vector<int> c) {
    std::vector<int> distances;
    
    int smaller_distance;
    for (int i = 0; i < n; i++) {
        smaller_distance = std::numeric_limits<int>::max();
        for (int j = 0; j < c.size(); j++) {
            if (std::abs(c[j] - i) < smaller_distance) { smaller_distance = std::abs(c[j] - i); }
        }
        distances.push_back(smaller_distance);
    }
    
    auto biggest = std::max_element(distances.begin(), distances.end());
    return *biggest;
}
