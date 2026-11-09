void dnaHealth(const vector<string> &genes, 
               const vector<int> &health, 
               const vector<string> &numbers) {
    // Part I - Create Hash Table:
    unordered_set<int> substr_list;
    unordered_multimap<string, int> hash_map;
    for (int i = 0; i < genes.size(); i++) {
        hash_map.emplace(genes[i], i);
        substr_list.emplace(genes[i].size());
    }
    
    // Part II - Check The Health Of Each String:
    long smallest_health = numeric_limits<long>::max();
    long biggest_health = numeric_limits<long>::min();
    long actual_health = 0;
    vector<string> values_aux;
    int index1, index2; string str_actual;
    for (int i = 0; i < numbers.size(); i++) {
        values_aux = split(numbers[i]);
        from_chars(values_aux[0].data(),
            values_aux[0].data() + values_aux[0].size(),
            index1);
        from_chars(values_aux[1].data(),
            values_aux[1].data() + values_aux[1].size(),
            index2);
        str_actual = values_aux[2];
        actual_health = 0;
        for (int j = 0; j < str_actual.size(); j++) {
            for (const auto& element : substr_list) {
                string vision = str_actual.substr(j, element);
                if (vision.size() != element) { continue; }
                auto range = hash_map.equal_range(vision);
                for (auto it = range.first; it != range.second; it++) {
                    if (index1 <= it->second && it->second <= index2) {
                        actual_health += health[it->second];
                    }
                }
            }
        }
        if (actual_health < smallest_health) {
            smallest_health = actual_health;
        }        
        if (actual_health > biggest_health) {
            biggest_health = actual_health;
        }
    }
    
    // Part III - Print The Answers
    cout << smallest_health << " " << biggest_health << endl;
}
