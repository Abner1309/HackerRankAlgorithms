vector<string> bigSorting(vector<string> unsorted) {
    std::sort(unsorted.begin(), unsorted.end(), [](const string& a, const string& b) {
                if (a.size() != b.size()) {
                    return a.size() < b.size();
                }
                return a < b;
            });
    return unsorted;
}
